from django.shortcuts import render
from .forms import signup

# Create your views here.


""" def signupPage(req):
    if req.method == "POST":
        signupform = signup(req.POST)
        if signupform.is_valid():
            print(signupform.cleaned_data)
    else:
        signupform = signup()
    return render(req, "mainapp/signup.html", {"signUP": signup}) """


def signupPage(req):
    if req.method == "POST":
        signupform = signup(req.POST)
        if signupform.is_valid():
            print(signupform.cleaned_data)
            return render(
                req,
                "mainapp/signup.html",
                {"signUP": signup, "message": "Your Account Created Successful"},
            )
        else:
            return render(
                req,
                "mainapp/signup.html",
                {"signUP": signup, "message": "password did not match"},
            )
    else:
        signupform = signup()
        return render(req, "mainapp/signup.html", {"signUP": signup})
