from django.shortcuts import render

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
            {"clientname": name, "clientemail": email, "password": password, "city": city},
        )
