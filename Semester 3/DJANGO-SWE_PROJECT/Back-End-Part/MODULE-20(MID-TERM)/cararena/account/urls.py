from django.urls import path
from account.views import (
    SignUpPageView,
    LogInPageView,
    ProfilePageView,
    ProfileUpdatePageView,
    PasswordChangePageView
)

urlpatterns = [
    path("signup/", SignUpPageView.as_view(), name="signup"),
    path("login/", LogInPageView.as_view(), name="login"),
    path("profile/", ProfilePageView.as_view(), name="profile"),
    path("edit-profile/", ProfileUpdatePageView.as_view(), name="editprofile"),
    path("Change-Password/", PasswordChangePageView.as_view(), name="changepass"),
]
