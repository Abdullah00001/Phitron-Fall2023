from django.urls import reverse_lazy
from musician.forms import MusicianForm
from musician.models import MusicianModel
from django.views.generic import FormView, UpdateView, DeleteView
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from django.utils.decorators import method_decorator

# Create your views here.


@method_decorator(login_required, name="dispatch")
class CreateMusicianView(FormView):
    form_class = MusicianForm
    template_name = "musician/musician.html"

    def get_success_url(self):
        return reverse_lazy("profile")

    def form_valid(self, form):
        form.save()
        messages.success(self.request, "Album Creation Successful")
        return super().form_valid(form)


@method_decorator(login_required, name="dispatch")
class UpdateMusicianDataView(UpdateView):
    form_class = MusicianForm
    model = MusicianModel
    pk_url_kwarg = "pk"
    template_name = "musician/updateprofile.html"

    def get_success_url(self):
        return reverse_lazy("profile")

    def form_valid(self, form):
        form.save()
        messages.success(self.request, "Musician Update Successful")
        return super().form_valid(form)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context["id"] = self.object.pk
        return context
    


@method_decorator(login_required, name="dispatch")
class DeleteMusicianView(DeleteView):
    model = MusicianModel
    template_name = "musician/deletemusician.html"
    pk_url_kwarg = "pk"

    def get_success_url(self):
        return reverse_lazy("profile")

    def delete(self, request, *args, **kwargs):
        messages.info(self.request, "Musician delete successful")
        return super().delete(request, *args, **kwargs)
