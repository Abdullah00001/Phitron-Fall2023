from django.shortcuts import render

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
