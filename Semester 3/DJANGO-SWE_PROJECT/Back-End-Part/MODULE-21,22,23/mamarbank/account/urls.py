from django.urls import path
from account.views import UserRegistrationPageView, UserLoginPageView, UserLogoutView,UserProfilePageView

urlpatterns = [
    path("registration/", UserRegistrationPageView.as_view(), name="register"),
    path("login/", UserLoginPageView.as_view(), name="login"),
    path("logout/", UserLogoutView.as_view(), name="logout"),
    path("profile/", UserProfilePageView.as_view(), name="profile"),
]
