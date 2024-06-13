from django.db import models
from category.models import CategoryModel
from django.contrib.auth.models import User

# Create your models here.


class PostModel(models.Model):
    post_title = models.CharField(max_length=150)
    post_subtitle = models.CharField(max_length=250)
    post_content = models.TextField()
    post_category = models.ManyToManyField(CategoryModel, null=True, blank=True)
    post_creation_time = models.DateTimeField(auto_now_add=True)
    post_author = models.ForeignKey(
        User, on_delete=models.CASCADE, null=True, blank=True
    )
    post_img = models.ImageField(
        upload_to="posts/media/uploads/", blank=True, null=True
    )

    def __str__(self):
        return self.post_title


class PostCommentModel(models.Model):
    post = models.ForeignKey(
        PostModel, on_delete=models.CASCADE, related_name="comments"
    )
    comment_author_username = models.CharField(max_length=25)
    comment_author_email = models.EmailField()
    comment_create_time = models.DateTimeField(auto_now_add=True)
    comment_body = models.TextField()

    def __str__(self) -> str:
        return f"Comments By {self.comment_username}"
