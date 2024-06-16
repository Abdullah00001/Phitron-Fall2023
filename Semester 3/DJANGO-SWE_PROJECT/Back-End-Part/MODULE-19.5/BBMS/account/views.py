from django.shortcuts import render,redirect
from django.urls import reverse_lazy
from django.contrib.auth.models import User
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm
from account.forms import SignUpForm, ProfileUpdateForm
from django.views.generic import FormView
from django.views.generic import UpdateView
from django.views.generic import TemplateView
from django.contrib.auth.views import LoginView
from django.contrib.auth.views import PasswordChangeView
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from django.utils.decorators import method_decorator

# Create your views here.

@method_decorator(login_required,name='dispatch')
class ProfilePageView(TemplateView):
    template_name = "account/profile.html"


class SignUpPageView(FormView):
    form_class = SignUpForm
    template_name = "account/signup.html"
    
    def get_success_url(self):
        return reverse_lazy("login")
    
    def dispatch(self,request, *args, **kwargs):
        if request.user.is_authenticated:
            messages.warning(request,'Youre Already Logged In.')
            return redirect("profile")
        return super().dispatch(request, *args, **kwargs)
    
    def form_valid(self, form):
        form.save()
        messages.success(self.request,"Sign Up Successful.Please Log In")
        return super().form_valid(form)
    
    def form_invalid(self, form):
        messages.warning(self.request,"Please Entered Correct Data")
        return super().form_invalid(form)
    


class LogInPageView(LoginView):
    authentication_form=AuthenticationForm
    template_name="account/login.html"
    
    def get_success_url(self):
        return reverse_lazy("profile")
    
    def dispatch(self,request, *args, **kwargs):
        if request.user.is_authenticated:
            messages.warning(request,'Youre Already Logged In.')
            return redirect("profile")
        return super().dispatch(request, *args, **kwargs)
    
    def form_valid(self, form):
        user=form.get_user()
        firstName=user.first_name
        lastName=user.last_name
        messages.info(self.request,f"Wellcome Back {firstName} {lastName}")
        return super().form_valid(form)
    
    def form_invalid(self, form):
        messages.warning(self.request,"Please Entered Correct Username & Password")
        return super().form_invalid(form)
    
    


@method_decorator(login_required,name='dispatch')
class ProfileUpdatePageView(UpdateView):
    model = User
    context_object_name = "form"
    form_class = ProfileUpdateForm
    template_name = "account/updateprofile.html"
    success_url = reverse_lazy("profile")

    def get_object(self):
        return self.request.user
    
    def form_valid(self, form):
        messages.success(self.request,"Profile Updated")
        return super().form_valid(form)

@method_decorator(login_required,name='dispatch')
class PasswordChangePageView(PasswordChangeView):
    form_class=PasswordChangeForm
    template_name="account/passwordchange.html"
    
    def get_success_url(self):
        return reverse_lazy("profile")
    
    def form_valid(self, form):
        messages.success(self.request,"Password Change Successful")
        return super().form_valid(form)
    
