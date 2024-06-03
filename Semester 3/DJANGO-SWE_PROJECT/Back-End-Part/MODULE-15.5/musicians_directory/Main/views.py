from django.shortcuts import render
from Musician.models import MusicianModel


# Create your views here.
def mainpage(req):
    infos = MusicianModel.objects.all()
    return render(req, "Main/Main.html", {"infos": infos})
