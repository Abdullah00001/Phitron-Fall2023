from django.urls import path
from account.views import (
    ProfileView,
    UpdateProfileView,
    UserLoginView,
    SignUpView,
    PasswordChangeView
)
from django.contrib.auth.views import LogoutView


urlpatterns = [
    path("profile/", ProfileView.as_view(), name="profile"),
    path("Edit-Profile/", UpdateProfileView.as_view(), name="editprofile"),
    path("login/", UserLoginView.as_view(), name="login"),
    path("signup/", SignUpView.as_view(), name="signup"),
    path("change-passowrd/", PasswordChangeView.as_view(), name="changepass"),
    path("logout/", LogoutView.as_view(next_page="login"), name="logout"),
]
