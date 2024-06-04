from django.shortcuts import render, redirect
from Musician.forms import MusicianForm
from Musician.models import MusicianModel


# Create your views here.
def musicianpage(req):
    if req.method == "POST":
        form = MusicianForm(req.POST)
        if form.is_valid():
            form.save()
            return redirect("home")
    else:
        form = MusicianForm()
    form = MusicianForm()
    return render(req, "Musician/Musician.html", {"form": form, "flag": False})


def editmusician(req, musicianID):
    user = MusicianModel.objects.get(pk=musicianID)
    userform = MusicianForm(instance=user)
    if req.method == "POST":
        userform = MusicianForm(req.POST, instance=user)
        if userform.is_valid():
            userform.save()
            return redirect("home")
    return render(
        req,
        "Musician/Musician.html",
        {"form": userform, "flag": True, "id": musicianID},
    )


def deletemusician(req, musicianID):
    user = MusicianModel.objects.get(pk=musicianID).delete()
    return redirect("home")
