from django.shortcuts import render
from django.urls import reverse_lazy
from album.forms import AlbumForm
from album.models import AlbumModel
from django.views.generic import CreateView, UpdateView, DeleteView
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from django.utils.decorators import method_decorator

# Create your views here.


@method_decorator(login_required, name="dispatch")
class AlbumCreationView(CreateView):
    form_class = AlbumForm
    template_name = "album/album.html"

    def get_success_url(self):
        return reverse_lazy("profile")

    def form_valid(self, form):
        form.save()
        messages.success(self.request, "Album Creation Successful")
        return super().form_valid(form)


@method_decorator(login_required, name="dispatch")
class UpdateAlbumDataView(UpdateView):
    form_class = AlbumForm
    model = AlbumModel
    pk_url_kwarg = "pk"
    template_name = "album/updatealbum.html"

    def get_success_url(self):
        return reverse_lazy("profile")

    def form_valid(self, form):
        form.save()
        messages.success(self.request, "Album Update Successful")
        return super().form_valid(form)


@method_decorator(login_required, name="dispatch")
class DeleteAlbumView(DeleteView):
    model = AlbumModel
    template_name = "album/deletealbum.html"
    pk_url_kwarg = "pk"

    def get_success_url(self):
        return reverse_lazy("profile")

    def delete(self, request, *args, **kwargs):
        messages.info(self.request, "Album delete successful")
        return super().delete(request, *args, **kwargs)
