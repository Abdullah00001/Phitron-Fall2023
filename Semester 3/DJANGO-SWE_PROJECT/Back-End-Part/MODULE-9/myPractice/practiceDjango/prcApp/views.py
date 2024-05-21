from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def courses(req):
    return HttpResponse("This Is Courses Page")

def prcapp(req):
    return HttpResponse("This App Home Page")