from django.shortcuts import render
from django.urls import reverse_lazy
from django.contrib.auth.models import User
from django.contrib.auth import login as auth_login
from account.forms import SignUpForm, ProfileUpdateForm
from django.contrib.auth.forms import AuthenticationForm
from django.views.generic import FormView
from django.views.generic import UpdateView
from django.contrib.auth.views import LoginView
from django.views.generic import TemplateView

# Create your views here.


class ProfilePageView(TemplateView):
    template_name = "account/profile.html"


class SignUpPageView(FormView):
    form_class = SignUpForm
    template_name = "account/signup.html"
    success_url = reverse_lazy("login")
    
    def form_valid(self, form):
        return super().form_valid(form)
    

    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context["form"] = self.get_form()
        return context


class LoginPageView(LoginView):
    authentication_form = AuthenticationForm
    template_name = "account/login.html"

    def get_success_url(self):
        return reverse_lazy("profile")
    
    def form_valid(self, form):
        auth_login(self.request,form.get_user())
        return super().form_valid(form)
    

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
