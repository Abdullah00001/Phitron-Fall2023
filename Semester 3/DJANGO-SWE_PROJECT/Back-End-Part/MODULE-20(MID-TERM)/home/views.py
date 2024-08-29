from typing import Any
from django.shortcuts import render
from carinfo.models import CarDetailModel
from django.views.generic import ListView
from carbrand.models import CarBrandModel


# Create your views here.


class HomePageView(ListView):
    template_name = "home/home.html"
    model = CarDetailModel

    def get_context_data(self, **kwargs):
        slug = self.kwargs.get("slug", None)
        context = super().get_context_data(**kwargs)
        if slug is not None:
            brands = CarBrandModel.objects.get(slug=slug)
            context["authenticusers_cars"] = CarDetailModel.objects.filter(
                car_brand=brands
            )
            context["brands"] = CarBrandModel.objects.all()
            return context
        else:
            context["brands"] = CarBrandModel.objects.all()

        context["unauthenticusers_cars"] = CarDetailModel.objects.order_by("?")[:8]
        context["authenticusers_cars"] = CarDetailModel.objects.all()

        return context
