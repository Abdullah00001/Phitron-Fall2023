from django.urls import path,include
from Home.views import homePage
urlpatterns = [
    path("",homePage,name="home"),
    path("", include("Account.urls")),
]
