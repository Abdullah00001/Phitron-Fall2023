from django.shortcuts import render, redirect
from . import models

# Create your views here.


def homepage(req):
    usersInfo = models.Users.objects.all()
    return render(req, "mainapp/home.html", {"userDatas": usersInfo})


def removepost(req, userid):
    user = models.Users.objects.get(pk=userid).delete()
    return redirect("home")
