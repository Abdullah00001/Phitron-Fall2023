from django.urls import path
from Author.views import SignUpPage, profilePage, LoginPage,LogOutPage,EditProfilePage,ChangePasswordPage

urlpatterns = [
    path("Profile/", profilePage, name="profile"),
    path("SignUp/", SignUpPage, name="signup"),
    path("LogIn/", LoginPage, name="login"),
    path("Log Out/",LogOutPage,name="logout"),
    path("EditProfile/",EditProfilePage,name="editprofile"),
    path("ChangePassword/",ChangePasswordPage,name="changepass")
]
