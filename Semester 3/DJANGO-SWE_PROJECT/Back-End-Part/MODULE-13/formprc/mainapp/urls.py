from django.urls import path
from . import views

urlpatterns = [
    path("", views.signupForm, name="signup"),
    path("home/", views.homepage, name="home"),
    path("contact/", views.contactPage, name="contact"),
]
