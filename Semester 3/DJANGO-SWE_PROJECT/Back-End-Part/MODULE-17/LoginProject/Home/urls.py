from django.urls import path
from Home.views import homePage, loginPage, signupPage, profilePage

urlpatterns = [
    path("", homePage, name="home"),
    path("Log-In/", loginPage, name="login"),
    path("Sign-Up/", signupPage, name="signup"),
    path("Profile/", profilePage, name="profile"),
]
