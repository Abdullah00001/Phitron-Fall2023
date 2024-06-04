from django.shortcuts import render, redirect
from ADD_TASK.forms import TaskForm
from ADD_TASK.models import TaskModel

# Create your views here.


def taskpage(req):
    if req.method == "POST":
        form = TaskForm(req.POST)
        if form.is_valid():
            form.save()
            return redirect("main")
    else:
        form = TaskForm()
    form = TaskForm()
    return render(req, "ADD_TASK/addtask.html", {"form": form,"flag":False})

def edittask(req,taskID):
    model=TaskModel.objects.get(pk=taskID)
    form=TaskForm(instance=model)
    if req.method=="POST":
        form=TaskForm(req.POST,instance=model)
        if form.is_valid():
            form.save()
            return redirect("main")
    return render(req,"ADD_TASK/addtask.html",{"form": form,"flag":True})

def deletetask(req,taskID):
    task=TaskModel.objects.get(pk=taskID).delete()
    return redirect("main")
