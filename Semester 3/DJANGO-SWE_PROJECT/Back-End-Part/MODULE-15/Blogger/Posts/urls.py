from django.urls import path
from Posts.views import createPost

urlpatterns = [
    path("",createPost,name="Add_Post")
]
