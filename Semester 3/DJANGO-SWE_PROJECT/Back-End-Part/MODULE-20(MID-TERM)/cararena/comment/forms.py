from django import forms
from comment.models import CommentModel


class CommentForm(forms.ModelForm):
    class Meta:
        model = CommentModel
        exclude = [
            "creation_time",
            "car_post",
        ]
        labels = {
            "user_name": "User Name",
            "comment": "Comment",
        }
