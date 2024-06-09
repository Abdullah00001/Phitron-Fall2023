from django.shortcuts import render, redirect
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash
from django.contrib.auth.forms import PasswordChangeForm, AuthenticationForm
from Account.forms import SignupForm
from django.contrib.auth.decorators import login_required
from django.contrib import messages

# Create your views here.


@login_required
def ProfilePage(req):
    return render(req, "Account/Profile.html")


def SignupPage(req):
    if req.user.is_authenticated:
        return redirect("home")
    else:
        if req.method == "POST":
            form = SignupForm(req.POST)
            if form.is_valid():
                form.save()
                messages.success(req, "Sign Up Successful")
                return redirect("login")
        else:
            form = SignupForm()
        return render(req, "Account/Signup.html", {"form": form})


def LoginPage(req):
    if req.user.is_authenticated:
        return redirect("home")
    else:
        if req.method == "POST":
            form = AuthenticationForm(request=req, data=req.POST)
            if form.is_valid():
                userName = form.cleaned_data["username"]
                userPassword = form.cleaned_data["password"]
                user = authenticate(username=userName, password=userPassword)
                if user is not None:
                    login(req, user)
                    messages.success(req, "Log In Successful")
                    return redirect("profile")
            else:
                messages.info(
                    req, "Wrong username or password.please insert valid creadinttial"
                )
                return redirect("login")
        else:
            form = AuthenticationForm()
        return render(req, "Account/Login.html", {"form": form})


@login_required
def ChanagePassWord(req):
    if req.method == "POST":
        form = PasswordChangeForm(user=req.user, data=req.POST)
        if form.is_valid():
            form.save()
            update_session_auth_hash(req, req.user)
            messages.info(req, "Password Change Successful")
            return redirect("profile")

    else:
        form = PasswordChangeForm(user=req.user)
    return render(req, "Account/ChangePass.html", {"form": form})


@login_required
def LogutPage(req):
    user = logout(req)
    messages.warning(req, "Logout Successful")
    return redirect("home")
