from django.shortcuts import render

# Create your views here.

def aboutPage(req):
    return render(req,'About/about.html')