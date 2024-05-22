from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def appHomePage(req):
    return render(req,'FirstApp/Home.html')