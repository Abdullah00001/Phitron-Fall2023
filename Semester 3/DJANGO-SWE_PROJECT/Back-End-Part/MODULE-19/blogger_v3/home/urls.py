from django.urls import path, include
from home.views import HomePageView

urlpatterns = [
    path("", HomePageView.as_view(), name="home"),
    path("category/<slug:slug>/",HomePageView.as_view(),name='slugfield'),
    path("account/", include("account.urls")),
    path("post/", include("posts.urls")),
]
