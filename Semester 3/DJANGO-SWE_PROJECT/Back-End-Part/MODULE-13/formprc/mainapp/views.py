from django.shortcuts import render
from .forms import contactform

# Create your views here.


def signupForm(req):
    return render(req, "mainapp/signup.html")


def homepage(req):
    if req.method == "POST":
        name = req.POST.get("username")
        email = req.POST.get("useremail")
        password = req.POST.get("userpassword")
        city = req.POST.get("usercity")
        return render(
            req,
            "mainapp/home.html",
            {
                "clientname": name,
                "clientemail": email,
                "password": password,
                "city": city,
            },
        )
    return render(req, "mainapp/home.html")


def contactPage(req):
    if req.method == "POST":
        contact = contactform(req.POST, req.FILES)
        if contact.is_valid():
            file = contact.cleaned_data["userFile"]
            with open("./mainapp/upload/" + file.name, "wb+") as destination:
                for chunk in file.chunks():
                    destination.write(chunk)
            print(contact.cleaned_data)
        return render(req, "mainapp/contactPage.html", {"contact": contact})
    else:
        contact = contactform()
    return render(req, "mainapp/contactPage.html", {"contact": contact})
