from django.urls import path, include
from home.views import HomePageView

urlpatterns = [
    path("", HomePageView.as_view(), name="home"),
    path("album/", include("album.urls")),
    path("musician/", include("musician.urls")),
]
