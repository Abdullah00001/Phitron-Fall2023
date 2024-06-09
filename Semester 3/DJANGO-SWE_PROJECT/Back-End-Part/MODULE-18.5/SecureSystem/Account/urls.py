from django.urls import path
from Account.views import ProfilePage, SignupPage, LoginPage, LogutPage, ChanagePassWord

urlpatterns = [
    path("profile/", ProfilePage, name="profile"),
    path("signUp/", SignupPage, name="signup"),
    path("login/", LoginPage, name="login"),
    path("logout/", LogutPage, name="logout"),
    path("Change-Password/", ChanagePassWord, name="changepassword"),
]
