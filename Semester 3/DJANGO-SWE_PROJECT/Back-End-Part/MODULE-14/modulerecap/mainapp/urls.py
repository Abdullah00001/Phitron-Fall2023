from django.urls import path
from mainapp.views import homepage, signuppage, profilespage,deleteprofile

urlpatterns = [
    path("", homepage, name="home"),
    path("Signup/", signuppage, name="signup"),
    path("Profiles/", profilespage, name="profile"),
    path("Delete/<int:slNO>",deleteprofile,name="dltprofile")
]
