from django.shortcuts import render
from mainapp.forms import StudentForm

# Create your views here.


def homepage(req):
    if req.method=="POST":
        stdform = StudentForm(req.POST)
        if stdform.is_valid():
            stdform.save(commit=True)
            print(stdform.cleaned_data)
    else:
        stdform = StudentForm()
    return render(req, "mainapp/home.html", {"form": stdform})
