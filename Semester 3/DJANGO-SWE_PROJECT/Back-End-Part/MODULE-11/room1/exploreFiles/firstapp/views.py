from django.shortcuts import render

# Create your views here.

def appHome(req):
    return render(req,"firstapp/firstapp.html")