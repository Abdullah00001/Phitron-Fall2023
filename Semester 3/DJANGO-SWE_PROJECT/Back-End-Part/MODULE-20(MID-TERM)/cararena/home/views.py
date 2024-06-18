from typing import Any
from django.shortcuts import render
from carinfo.models import CarDetailModel
from django.views.generic import ListView


# Create your views here.


class HomePageView(ListView):
    template_name = "home/home.html"
    model=CarDetailModel
    
    def get_context_data(self, **kwargs):
        context= super().get_context_data(**kwargs)
        context["cars"]=CarDetailModel.objects.order_by('?')[:8]
        return context
