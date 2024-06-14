from django.shortcuts import render
from django.urls import reverse_lazy
from musician.forms import MusicianForm
from django.views.generic import FormView

# Create your views here.


class CreateMusicianView(FormView):
    form_class = MusicianForm
    template_name = "musician/musician.html"
    success_url = reverse_lazy("profile")

    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context["form"] = self.get_form()
        return context
