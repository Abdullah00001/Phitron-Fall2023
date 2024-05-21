from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def studentsInfo(req):
    return HttpResponse("This Is Studets Information App")
