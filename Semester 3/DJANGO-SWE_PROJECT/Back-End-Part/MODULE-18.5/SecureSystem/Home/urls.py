from django.urls import path, include
from Home.views import HomePage

urlpatterns = [
    path("", HomePage, name="home"),
    path("Account/", include("Account.urls")),
]
