from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def aboutPage(req):
    return render(req,'navigation/about.html')

def contactPage(req):
    return render(req,'navigation/contact.html')