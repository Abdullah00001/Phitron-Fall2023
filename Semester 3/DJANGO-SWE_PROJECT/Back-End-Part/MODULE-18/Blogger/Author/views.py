from django.shortcuts import render, redirect
from Author.forms import SignupForm, EditProfileForm
from django.contrib.auth import authenticate, login, logout,update_session_auth_hash
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from Posts.models import PostsModel

# Create your views here.


@login_required
def profilePage(req):
    authorposts = PostsModel.objects.filter(author=req.user)
    return render(req, "Author/Profile.html",{"posts":authorposts})


@login_required
def EditProfilePage(req):
    if req.method == "POST":
        form = EditProfileForm(req.POST, instance=req.user)
        if form.is_valid():
            form.save()
            messages.success(req, "Profile Updated")
            return redirect("profile")
    else:
        form = EditProfileForm(instance=req.user)
    return render(req, "Author/UpdateProfile.html", {"form": form})


def SignUpPage(req):
    if req.method == "POST":
        form = SignupForm(req.POST)
        if form.is_valid():
            form.save()
            messages.success(req, "Sign Up Succesfull.Please Login To Procceed")
            return redirect("login")
    else:
        form = SignupForm()
    return render(req, "Author/SignUp.html", {"form": form})


def LoginPage(req):
    if req.method == "POST":
        form = AuthenticationForm(request=req, data=req.POST)
        if form.is_valid():
            userName = form.cleaned_data["username"]
            userPassword = form.cleaned_data["password"]
            user = authenticate(username=userName, password=userPassword)
            if user is not None:
                login(req, user)
                messages.success(req, "Congatulation!!!Log In Successful")
                return redirect("profile")
        else:
            messages.error(req,"Sorry No User Found.please sign up")
            return redirect("signup")
    else:
        form = AuthenticationForm()
    return render(req, "Author/LogIn.html", {"form": form})


@login_required
def ChangePasswordPage(req):
    if req.method == "POST":
        form = PasswordChangeForm(user=req.user, data=req.POST)
        if form.is_valid():
            form.save()
            update_session_auth_hash(req,req.user)
            messages.success(req,"Password Changed Successful")
            return redirect("profile")
    else:
        form = PasswordChangeForm(user=req.user)
    return render(req, "Author/ChangePassword.html", {"form": form})


@login_required
def LogOutPage(req):
    logout(req)
    messages.warning(req, "Log Out Successful")
    return redirect("login")
