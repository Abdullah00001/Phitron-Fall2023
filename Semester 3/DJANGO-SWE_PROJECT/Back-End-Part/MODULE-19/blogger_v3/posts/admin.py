from django.contrib import admin
from posts.models import PostModel, PostCommentModel

# Register your models here.

admin.site.register(PostModel)
admin.site.register(PostCommentModel)
