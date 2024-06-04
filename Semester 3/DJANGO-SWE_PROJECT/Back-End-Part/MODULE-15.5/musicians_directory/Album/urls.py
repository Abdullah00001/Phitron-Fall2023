from django.urls import path
from Album.views import albumpage, editalbum,deleteAlbum

urlpatterns = [
    path("Album/", albumpage, name="album"),
    path("Edit/<int:albumID>/", editalbum, name="editAlbum"),
    path("Delete/<int:albumID>/", deleteAlbum, name="deleteAlbum"),
]
