from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm
from django.contrib.auth.models import User
from django.contrib.auth.mixins import LoginRequiredMixin
from django.shortcuts import render
from django.urls import reverse_lazy
from django.views.generic.edit import CreateView
from django.views.generic import TemplateView, UpdateView
from django.contrib.auth.views import LoginView
from django.contrib import messages
from account.forms import SignUpForm, UpdateProfileForm
from django.contrib.auth.views import PasswordChangeView

# Create your views here.


class ProfileView(LoginRequiredMixin, TemplateView):
    template_name = "account/profile.html"
    login_url = "login"


""" def profilePage(request):
    return render(request, "account/profile.html") """


class UpdateProfileView(LoginRequiredMixin, UpdateView):
    model = User
    template_name = "account/updateProfile.html"
    form_class = UpdateProfileForm
    success_url = reverse_lazy("profile")
    login_url = "login"

    def get_object(self):
        return self.request.user

    def form_valid(self, form: UpdateProfileForm):
        return super().form_valid(form)


""" def updateProfilePage(request):
    return render(request, "account/updateProfile.html") """


class PasswordChangeView(PasswordChangeView):
    form_class = PasswordChangeForm
    success_url = reverse_lazy("profile")
    template_name = "account/changePassword.html"

    """ def get_object(self):
        return self.request.user

    def get_form_kwargs(self):
        kwargs = super().get_form_kwargs()
        kwargs["user"] = self.request.user
        return kwargs

    def form_valid(self, form: PasswordChangeForm):
        return super().form_valid(form) """


class UserLoginView(LoginView):
    template_name = "account/login.html"

    def get_success_url(self):
        return reverse_lazy("profile")

    def form_valid(self, form: AuthenticationForm):
        messages.success(self.request, "Log In Successful")
        return super().form_valid(form)

    def form_invalid(self, form: AuthenticationForm):
        messages.warning(self.request, "Username or Password is incorrect")
        return super().form_invalid(form)

    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context["type"] = "Login"
        return context


class SignUpView(CreateView):
    template_name = "account/signup.html"
    form_class = SignUpForm
    success_url = reverse_lazy("login")

    def form_valid(self, form: SignUpForm):
        return super().form_valid(form)


""" def changePasswordPage(request):
    return render(request, "account/changePassword.html") """
