from django.urls import path
from . import views

urlpatterns = [
    path("Teachers/", views.teachers),
]
