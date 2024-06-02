from django.urls import path
from . import views

urlpatterns = [
    path("", views.homepage, name="home"),
    path("delete/<int:userid>/", views.removepost, name="delete_post"),
]
