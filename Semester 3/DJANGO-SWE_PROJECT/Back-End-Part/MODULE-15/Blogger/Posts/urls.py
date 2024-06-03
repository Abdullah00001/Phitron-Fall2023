from django.urls import path
from Posts.views import createPost,editpost,deletepost

urlpatterns = [
    path("", createPost, name="Add_Post"),
    path("Edit/<int:postID>/", editpost, name="edit"),
    path("Delete/<int:postID>/",deletepost,name="delete")
]
