from django.urls import path
from . import views

urlpatterns = [
    path("", views.productsHome, name="products"),
]
