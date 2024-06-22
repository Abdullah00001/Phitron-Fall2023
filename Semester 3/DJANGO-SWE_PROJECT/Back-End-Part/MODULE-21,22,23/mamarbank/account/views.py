from django.http import HttpRequest
from django.http.response import HttpResponse as HttpResponse
from django.shortcuts import render
from django.urls import reverse_lazy
from django.contrib.auth import login
from django.views.generic import FormView
from django.contrib.auth.views import LoginView, LogoutView
from account.forms import UserRegistrationForm
from django.contrib.auth.mixins import LoginRequiredMixin

# Create your views here.


class UserRegistrationPageView(FormView):
    form_class = UserRegistrationForm
    template_name = "account/registration.html"

    def get_success_url(self):
        return reverse_lazy("register")

    def form_valid(self, form):
        print(form.cleaned_data.get)
        user = form.save()
        login(self.request, user)
        print(user)
        return super().form_valid(form)


class UserLoginPageView(LoginView):
    template_name = "account/login.html"

    def get_success_url(self):
        return reverse_lazy("home")


class UserLogoutView(LogoutView):
    next_page = "login"

    """ def dispatch(self, request: HttpRequest, *args, **kwargs):
        return super().dispatch(request, *args, **kwargs) """

