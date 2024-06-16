from django.urls import path
from musician.views import (
    CreateMusicianView,
    UpdateMusicianDataView,
    DeleteMusicianView,
)

urlpatterns = [
    path("add-musician/", CreateMusicianView.as_view(), name="addmusician"),
    path("update-musician/<int:pk>/", UpdateMusicianDataView.as_view(), name="updatemusician"),
    path("delete-musician/<int:pk>/", DeleteMusicianView.as_view(), name="deletemusician"),
]
