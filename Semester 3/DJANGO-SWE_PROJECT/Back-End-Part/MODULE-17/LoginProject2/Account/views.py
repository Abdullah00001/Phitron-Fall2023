from django.shortcuts import render, redirect
from Account.forms import SignUpForm, EditInfoForm
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash
from django.contrib.auth.forms import (
    AuthenticationForm,
    PasswordChangeForm,
    SetPasswordForm,
)

# Create your views here.


def profilePage(req):
    if req.user.is_authenticated:
        return render(req, "Account/Profile.html", {"user": req.user})
    else:
        return redirect("home")


def SignupPage(req):
    if req.user.is_authenticated:
        return redirect("profile")
    else:
        if req.method == "POST":
            form = SignUpForm(req.POST)
            if form.is_valid():
                form.save()
                return redirect("login")
        else:
            form = SignUpForm()
        return render(req, "Account/SignUp.html", {"form": form})


def loginPage(req):
    if req.user.is_authenticated:
        return redirect("profile")
    else:
        if req.method == "POST":
            form = AuthenticationForm(request=req, data=req.POST)
            if form.is_valid():
                userName = form.cleaned_data["username"]
                userPassword = form.cleaned_data["password"]
                user = authenticate(username=userName, password=userPassword)
                if user is not None:
                    login(req, user)
                    return redirect("profile")
        else:
            form = AuthenticationForm()
        return render(req, "Account/LogIn.html", {"form": form})


def LogoutPage(req):
    logout(req)
    return redirect("home")


def ChangePasswordPage(req):
    if req.user.is_authenticated:
        if req.method == "POST":
            form = PasswordChangeForm(user=req.user, data=req.POST)
            if form.is_valid():
                form.save()
                update_session_auth_hash(req, req.user)
                return redirect("profile")
        else:
            form = PasswordChangeForm(user=req.user)
        return render(req, "Account/ChangePassword.html", {"form": form})
    else:
        return redirect("home")


def UpdateProfile(req):
    if req.user.is_authenticated:
        if req.method == "POST":
            form = EditInfoForm(req.POST, instance=req.user)
            if form.is_valid():
                form.save()
                return redirect("profile")
        else:
            form = EditInfoForm(instance=req.user)
        return render(req, "Account/EditProfile.html", {"form": form})
    else:
        return redirect("signup")
