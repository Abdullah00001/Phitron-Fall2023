from django.urls import path
from album.views import AlbumCreationView


urlpatterns = [
    path("create-album/", AlbumCreationView.as_view(), name="createalbum"),
]
