from django.urls import path
from album.views import AlbumCreationView, UpdateAlbumDataView, DeleteAlbumView


urlpatterns = [
    path("create-album/", AlbumCreationView.as_view(), name="createalbum"),
    path("update-album/<int:pk>/", UpdateAlbumDataView.as_view(), name="updatealbum"),
    path("delete-album/<int:pk>/", DeleteAlbumView.as_view(), name="deletealbum"),
]
