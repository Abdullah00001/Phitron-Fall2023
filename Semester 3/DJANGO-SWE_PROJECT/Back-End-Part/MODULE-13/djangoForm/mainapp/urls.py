from django.urls import path
from . import views

urlpatterns = [
    path("", views.signupPage, name="signup"),
    path("home/", views.mainApphomePage, name="home"),
]
