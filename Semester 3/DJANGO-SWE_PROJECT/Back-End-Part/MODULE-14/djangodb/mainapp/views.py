from django.shortcuts import render
from . import models
# Create your views here.


def homePage(req):
    student=models.Student.objects.all()
    print(student)
    return render(req, "mainapp/home.html",{"stdnt":student})
