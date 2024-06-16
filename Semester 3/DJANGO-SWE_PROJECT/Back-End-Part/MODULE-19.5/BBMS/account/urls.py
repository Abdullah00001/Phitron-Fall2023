from django.urls import path
from django.contrib.auth.views import LogoutView
from account.views import (
    SignUpPageView,
    LogInPageView,
    ProfileUpdatePageView,
    ProfilePageView,
    PasswordChangePageView
)

urlpatterns = [
    path("profile/", ProfilePageView.as_view(), name="profile"),
    path("signup/", SignUpPageView.as_view(), name="signup"),
    path("login/", LogInPageView.as_view(), name="login"),
    path("logout/", LogoutView.as_view(next_page="login"), name="logout"),
    path("update-profile/", ProfileUpdatePageView.as_view(), name="updateprofile"),
    path("change-password/", PasswordChangePageView.as_view(), name="changepass"),
]
