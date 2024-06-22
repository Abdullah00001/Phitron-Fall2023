from django.urls import path, include
from core.views import HomePageView

urlpatterns = [
    path("", HomePageView.as_view(), name="home"),
]
