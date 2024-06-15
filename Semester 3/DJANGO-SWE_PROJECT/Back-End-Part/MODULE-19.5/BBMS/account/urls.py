from django.urls import path
from account.views import (
    SignUpPageView,
    LoginPageView,
    ProfileUpdatePageView,
    ProfilePageView,
)

urlpatterns = [
    path("profile/", ProfilePageView.as_view(), name="profile"),
    path("signup/", SignUpPageView.as_view(), name="signup"),
    path("login/", LoginPageView.as_view(), name="login"),
    path("update-profile/", ProfileUpdatePageView.as_view(), name="updateprofile"),
]
