from django.urls import path
from . import views

urlpatterns = [
    path("", views.signupPage, name="signup"),
    path("home/", views.mainApphomePage, name="home"),
    path("contact/", views.contactPage, name="contact"),
]
