from django.shortcuts import render,redirect
from mainapp.forms import UserForm
from mainapp.models import UserModel

# Create your views here.


def homepage(req):
    return render(req, "mainapp/home.html")


def signuppage(req):
    if req.method == "POST":
        form = UserForm(req.POST)
        if form.is_valid():
            form.save()
    else:
        form = UserForm()
    form = UserForm()
    return render(req, "mainapp/signup.html", {"Form": form})


def profilespage(req):
    userinfos = UserModel.objects.all()
    return render(req, "mainapp/profiles.html", {"infos": userinfos})

def deleteprofile(req,slNO):
    userinfos = UserModel.objects.get(pk=slNO).delete()
    return redirect("home")
