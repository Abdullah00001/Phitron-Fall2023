from django.urls import path
from Musician.views import musicianpage

urlpatterns = [
    path("Musician/", musicianpage, name="musician"),
]
