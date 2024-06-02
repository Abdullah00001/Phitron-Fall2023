from django.urls import path
from Home.views import homepage

urlpatterns = [
    path("", homepage, name="home"),
]
