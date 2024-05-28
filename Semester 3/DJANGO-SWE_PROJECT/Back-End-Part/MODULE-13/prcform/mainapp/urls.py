from django.urls import path
from . import views

urlpatterns = [
    path("", views.signUpPage, name="signup_Page"),
    path("home/", views.appHome, name="home"),
    path("contact/", views.contactPage, name="contact"),
]
