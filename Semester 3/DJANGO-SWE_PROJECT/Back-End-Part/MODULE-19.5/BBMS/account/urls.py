from django.urls import path
from account.views import (
    SignUpPageView,
    ProfileUpdatePageView,
    ProfilePageView,
)
from django.contrib.auth.views import LoginView

urlpatterns = [
    path("profile/", ProfilePageView.as_view(), name="profile"),
    path("signup/", SignUpPageView.as_view(), name="signup"),
    path("login/", LoginView.as_view(template_name='account/login.html'), name="login"),
    path("update-profile/", ProfileUpdatePageView.as_view(), name="updateprofile"),
]
