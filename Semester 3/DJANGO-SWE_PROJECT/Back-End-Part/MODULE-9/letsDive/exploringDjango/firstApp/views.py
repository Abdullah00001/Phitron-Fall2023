from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.


def courses(req):
    return HttpResponse("This Is Courses Page")


def first_app(req):
    return HttpResponse("This Is First App Page")
