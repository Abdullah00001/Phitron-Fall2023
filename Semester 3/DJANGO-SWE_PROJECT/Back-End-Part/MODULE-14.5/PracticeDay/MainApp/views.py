from django.shortcuts import render,redirect
from MainApp.forms import MainForm

# Create your views here.


def homepage(req):
    print("hello")
    if req.method == "POST":
        form = MainForm(req.POST)
        if form.is_valid():
            print(form.cleaned_data)
            return redirect("home")
    else:
        form = MainForm()
    return render(req, "MainApp/Home.html",{"form":form})
