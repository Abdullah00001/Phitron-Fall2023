from django.urls import path
from Album.views import albumpage

urlpatterns = [
    path("Album/", albumpage, name="album"),
]