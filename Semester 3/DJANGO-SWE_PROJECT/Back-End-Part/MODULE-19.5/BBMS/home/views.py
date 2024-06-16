from django.shortcuts import render
from django.views.generic import ListView
from musician.models import MusicianModel
# Create your views here.


class HomePageView(ListView):
    template_name = 'home/home.html'
    context_object_name='infos'
    model=MusicianModel