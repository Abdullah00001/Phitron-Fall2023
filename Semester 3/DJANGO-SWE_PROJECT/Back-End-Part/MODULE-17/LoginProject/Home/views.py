from django.shortcuts import render, redirect
from django.contrib.auth import authenticate, login, logout
from django.contrib.auth.forms import AuthenticationForm
from Home.forms import SignupForm

# Create your views here.


def homePage(req):
    return render(req, "Home/Home.html")


def loginPage(req):
    if req.method == "POST":
        form = AuthenticationForm(request=req, data=req.POST)
        if form.is_valid():
            userName = form.cleaned_data["username"]
            userPassword = form.cleaned_data["password"]
            user = authenticate(username=userName, password=userPassword)
            if user is not None:
                login(req,user)
                return redirect("profile")
    else:
        form = AuthenticationForm()
        return render(req, "Home/Login.html", {"form": form})


def signupPage(req):
    if req.method == "POST":
        form = SignupForm(req.POST)
        if form.is_valid():
            form.save()
            return redirect("login")
    else:
        form = SignupForm()
    return render(req, "Home/SignUp.html", {"form": form})


def profilePage(req):
    return render(req, "Home/Profile.html")
