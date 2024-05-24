from django.shortcuts import render


def homePage(req):
    return render(req, "index.html")
