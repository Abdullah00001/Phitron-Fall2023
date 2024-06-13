from django import forms
from posts.models import PostModel, PostCommentModel


class CreatePostForm(forms.ModelForm):
    class Meta:
        model = PostModel
        exclude = ["creation_time", "post_author"]
        labels = {
            "post_title": "Title",
            "post_subtitle": "Subtitle",
            "post_content": "Post Content",
            "post_category": "Category",
        }
        widgets = {
            "post_title": forms.TextInput(
                attrs={
                    "placeholder": "Type your post title here...",
                }
            ),
            "post_subtitle": forms.TextInput(
                attrs={
                    "placeholder": "Type your post title here...",
                }
            ),
            "post_content": forms.Textarea(
                attrs={
                    "placeholder": "Type your post title here...",
                    "rows": 3,
                }
            ),
            "post_category": forms.SelectMultiple(),
        }


class CommentForm(forms.ModelForm):
    class Meta:
        model = PostCommentModel
        exclude = [
            "comment_create_time",
            "post",
        ]

        labels = {
            "comment_author_username": "Username",
            "comment_author_email": "Email",
            "comment_body": "Comment",
        }
