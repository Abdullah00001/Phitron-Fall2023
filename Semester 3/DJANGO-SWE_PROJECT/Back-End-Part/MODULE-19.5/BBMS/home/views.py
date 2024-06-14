from django.shortcuts import render
from django.views.generic import ListView
# Create your views here.


class HomePageView(ListView):
    template_name = 'home/home.html'
    