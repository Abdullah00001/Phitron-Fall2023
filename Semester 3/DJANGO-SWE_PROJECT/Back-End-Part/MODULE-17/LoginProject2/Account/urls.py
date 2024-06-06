from django.urls import path
from Account.views import profilePage, SignupPage, loginPage, LogoutPage,ChangePasswordPage,UpdateProfile

urlpatterns = [
    path("Profile/", profilePage, name="profile"),
    path("SignUp/", SignupPage, name="signup"),
    path("LogIn/", loginPage, name="login"),
    path("LogOut/", LogoutPage, name="logout"),
    path("ChnagePassword/",ChangePasswordPage,name="changepass"),
    path("EditProfile/",UpdateProfile,name="editprofile")
]
