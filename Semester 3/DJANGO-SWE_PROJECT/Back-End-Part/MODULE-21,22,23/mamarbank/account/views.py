from django.shortcuts import render, redirect
from django.urls import reverse_lazy
from django.contrib.auth import login
from django.views.generic import FormView
from django.contrib.auth.views import LoginView, LogoutView
from account.forms import UserRegistrationForm, UserUpdateForm
from django.contrib.auth.mixins import LoginRequiredMixin
from django.views import View

# Create your views here.


class UserProfilePageView(View):
    template_name = "account/profile.html"

    def get(self, request):
        form = UserUpdateForm(instance=request.user)
        return render(
            request,
            self.template_name,
            context={
                "form": form,
            },
        )

    def post(self, request):
        form = UserUpdateForm(request.POST, instance=request.user)
        if form.is_valid():
            form.save()
            return redirect("profile")
        return render(
            request,
            self.template_name,
            context={
                "form": form,
            },
        )


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
