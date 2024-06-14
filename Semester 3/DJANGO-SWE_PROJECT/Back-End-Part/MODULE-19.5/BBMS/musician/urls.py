from django.urls import path
from musician.views import CreateMusicianView

urlpatterns = [
    path("add-musician/", CreateMusicianView.as_view(), name="addmusician"),
]
