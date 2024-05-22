from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def appHome(req):
    return HttpResponse("this is app home page")