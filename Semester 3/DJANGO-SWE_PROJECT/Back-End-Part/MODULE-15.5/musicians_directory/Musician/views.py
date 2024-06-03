from django.shortcuts import render, redirect
from Musician.forms import MusicanForm


# Create your views here.
def musicianpage(req):
    if req.method == "POST":
        form = MusicanForm(req.POST)
        if form.is_valid():
            form.save()
            return redirect("home")
    else:
        form = MusicanForm()
    form = MusicanForm()
    return render(req, "Musician/Musician.html", {"form": form})
