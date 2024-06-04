from django.shortcuts import render
from ADD_TASK.models import TaskModel

# Create your views here.


def mainpage(req):
    tasks = TaskModel.objects.all()
    return render(req, "MAIN/Main.html", {"tasks": tasks})


def homepage(req):
    return render(req, "MAIN/home.html")
