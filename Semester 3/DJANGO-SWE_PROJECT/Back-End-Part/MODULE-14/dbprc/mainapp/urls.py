from django.urls import path
from . import views

urlpatterns = [
    path("", views.homepage, name="home"),
    path("delete/<str:email>/", views.removeUser, name="remove_user"),
]
