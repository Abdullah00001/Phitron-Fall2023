from django.shortcuts import render
from Home.forms import SignupForm
from django.contrib import messages

# Create your views here.


def signupPage(req):
    if req.method == "POST":
        form = SignupForm(req.POST)
        if form.is_valid():
            messages.success(req, "Sign in Complete")
            form.save()
    else:
        form = SignupForm()
    return render(req, "Home/signup.html", {"form": form})
