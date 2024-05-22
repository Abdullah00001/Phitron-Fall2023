from django.http import HttpResponse
from django.shortcuts import render

def htomePage(req):
    return render(req,'home.html')