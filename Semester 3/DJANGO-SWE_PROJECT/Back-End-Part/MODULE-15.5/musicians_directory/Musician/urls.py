from django.urls import path
from Musician.views import musicianpage, editmusician, deletemusician

urlpatterns = [
    path("Musician/", musicianpage, name="musician"),
    path("Edit Musician/<int:musicianID>/", editmusician, name="editMusician"),
    path("Delete Musician/<int:musicianID>/", deletemusician, name="deleteMusician"),
]
