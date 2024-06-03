from django.urls import path, include
from Main.views import mainpage

urlpatterns = [
    path("", mainpage, name="home"),
    path("", include("Album.urls")),
    path("", include("Musician.urls")),
]
