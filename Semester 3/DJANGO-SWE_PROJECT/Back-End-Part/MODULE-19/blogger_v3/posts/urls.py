from django.urls import path
from posts.views import CreatePostView, UpdatePostView, DeletePostView, PostDetailsView,DeleteCommentView

urlpatterns = [
    path("create-post/", CreatePostView.as_view(), name="createpost"),
    path("update-post/<int:postId>/", UpdatePostView.as_view(), name="updatepost"),
    path("delete-post/<int:postId>/", DeletePostView.as_view(), name="deletepost"),
    path("delete-comment/<int:pk>/", DeleteCommentView.as_view(), name="deletecomment"),
    path("Post-Deatils/<int:pk>/", PostDetailsView.as_view(), name="postdetails"),
]
