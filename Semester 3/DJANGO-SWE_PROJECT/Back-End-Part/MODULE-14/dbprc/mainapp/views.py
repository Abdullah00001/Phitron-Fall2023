from django.shortcuts import render, redirect
from . import models


# Create your views here.
def homepage(req):
    usersData = models.Users.objects.all()
    return render(req, "mainapp/home.html", {"userinfos": usersData})


def removeUser(req, email):
    user = models.Users.objects.get(pk=email).delete()
    print(user)
    return redirect("home")
