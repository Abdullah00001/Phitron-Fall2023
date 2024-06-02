from django.urls import path
from Author.views import authorpage

urlpatterns = [
    path("",authorpage,name="author")
]
