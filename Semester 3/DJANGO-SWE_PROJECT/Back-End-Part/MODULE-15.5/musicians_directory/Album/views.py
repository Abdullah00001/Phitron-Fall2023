from django.shortcuts import render, redirect
from Album.forms import AlbumForm


# Create your views here.
def albumpage(req):
    if req.method == "POST":
        form = AlbumForm(req.POST)
        if form.is_valid():
            form.save()
            return redirect("home")
    else:
        form = AlbumForm()
    form = AlbumForm()
    return render(req, "Album/Album.html",{"form":form})
