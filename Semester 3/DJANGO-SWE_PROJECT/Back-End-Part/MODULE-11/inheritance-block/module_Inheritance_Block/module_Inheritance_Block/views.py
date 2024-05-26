from django.shortcuts import render


def homePage(req):
    return render(req, "home.html", {"name": "home"})
