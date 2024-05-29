from django.shortcuts import render
from .forms import contactForm

# Create your views here.


def signUpPage(req):
    return render(req, "mainapp/signupPage.html")


def appHome(req):
    if req.method == "POST":
        firstName = req.POST.get("userFirstName")
        lastName = req.POST.get("userLastName")
        userEmail = req.POST.get("userEmail")
        user_Adress = req.POST.get("userAddress")
        userPassword = req.POST.get("userPassword")
        print(user_Adress)
        return render(
            req,
            "mainapp/appHome.html",
            {
                "first_Name": firstName,
                "last_name": lastName,
                "user_email": userEmail,
                "user_address": user_Adress,
                "user_password": userPassword,
            },
        )
    return render(req, "mainapp/appHome.html")


def contactPage(req):
    if req.method == "POST":
        form = contactForm(req.POST, req.FILES)
        if form.is_valid():
            file = form.cleaned_data["userFile"]
            with open("./mainapp/upload/" + file.name, "wb+") as destination:
                for chunk in file.chunks():
                    destination.write(chunk)
            print(form.cleaned_data)
            return render(req, "mainapp/contactpage.html", {"contact": form})
    else:
        form = contactForm()
    return render(req, "mainapp/contactpage.html", {"contact": form})
