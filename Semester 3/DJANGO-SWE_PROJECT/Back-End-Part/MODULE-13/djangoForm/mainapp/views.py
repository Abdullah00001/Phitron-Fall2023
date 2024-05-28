from django.shortcuts import render
from .forms import contactForm

# Create your views here.


def mainApphomePage(req):
    if req.method == "POST":
        email = req.POST.get("useremail")
        password = req.POST.get("userpassword")
        address = req.POST.get("useraddress")
        city = req.POST.get("usercity")
        zipcode = req.POST.get("userezip")
        return render(
            req,
            "mainapp/mainapp.html",
            {
                "email": email,
                "password": password,
                "address": address,
                "city": city,
                "zip": zipcode,
            },
        )


def signupPage(req):
    return render(req, "mainapp/signup.html")


def contactPage(req):
    contact_Form = contactForm(req.POST)
    if contact_Form.is_valid():
        print(contact_Form.cleaned_data)
    return render(req,"mainapp/contactPage.html",{"form": contact_Form})
