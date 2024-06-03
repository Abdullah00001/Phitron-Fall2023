from django.urls import path
from MainApp.views import homepage

urlpatterns = [
    path("", homepage, name="home"),
]
