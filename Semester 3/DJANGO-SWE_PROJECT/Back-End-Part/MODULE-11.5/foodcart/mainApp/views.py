from django.shortcuts import render

# Create your views here.


def homePage(req):
    return render(req, "home.html")
