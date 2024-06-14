from django.shortcuts import render
from django.urls import reverse_lazy
from django.contrib.auth.models import User
from account.forms import SignUpForm, ProfileUpdateForm
from django.contrib.auth.forms import AuthenticationForm
from django.views.generic import FormView
from django.views.generic import UpdateView
from django.contrib.auth.views import LoginView

# Create your views here.


class SignUpPageView(FormView):
    form_class = SignUpForm
    template_name = "account/signup.html"
    success_url = reverse_lazy("login")

    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context["form"] = self.get_form()
        return context


class LoginPageView(LoginView):
    authentication_form = AuthenticationForm
    template_name = "account/login.html"
    success_url = reverse_lazy("profile")

    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context["form"] = self.get_form()
        return context


class ProfileUpdatePageView(UpdateView):
    model = User
    context_object_name = "form"
    form_class = ProfileUpdateForm
    template_name = "account/updateprofile.html"
    success_url = reverse_lazy("profile")

    def get_object(self):
        return self.request.user
