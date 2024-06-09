from django.shortcuts import render

# Create your views here.


def HomePage(req):
    return render(req, "Home/index.html")
