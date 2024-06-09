from django.urls import path
from Home.views import homepage

urlpatterns = [
    path("", homepage, name="home"),
    path("Category/<slug:cat_slug>/", homepage, name="post_slug"),
]
