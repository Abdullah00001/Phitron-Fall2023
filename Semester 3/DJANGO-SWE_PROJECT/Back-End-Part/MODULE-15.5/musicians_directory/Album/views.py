from django.shortcuts import render, redirect
from Album.forms import AlbumForm
from Album.models import AlbumModel


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
    return render(req, "Album/Album.html", {"form": form, "btn_flag": False})


def editalbum(req, albumID):
    albumdata = AlbumModel.objects.get(pk=albumID)
    album_form = AlbumForm(instance=albumdata)
    if req.method == "POST":
        album_form = AlbumForm(req.POST, instance=albumdata)
        if album_form.is_valid():
            album_form.save()
            return redirect("home")
    return render(req, "Album/Album.html", {"form": album_form, "btn_flag": True,"id":albumID})


def deleteAlbum(req, albumID):
    albumdata = AlbumModel.objects.get(pk=albumID).delete()
    return redirect("home")
