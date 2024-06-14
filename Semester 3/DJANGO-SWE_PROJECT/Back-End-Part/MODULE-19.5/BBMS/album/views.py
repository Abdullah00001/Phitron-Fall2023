from django.shortcuts import render
from django.urls import reverse_lazy
from album.forms import AlbumForm
from django.views.generic import FormView

# Create your views here.


class AlbumCreationView(FormView):
    form_class = AlbumForm
    template_name = "album/album.html"
    success_url = reverse_lazy("profile")

    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context["form"] = self.get_form()
        return context
