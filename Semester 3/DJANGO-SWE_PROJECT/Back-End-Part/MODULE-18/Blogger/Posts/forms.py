from django import forms
from Posts.models import PostsModel


class PostForm(forms.ModelForm):
    class Meta:
        model = PostsModel
        exclude = ["author"]
        labels = {
            "title": "Post Title",
            "subtitle": "Post Sub-Title",
            "content": "Post Content",
            "category": "Select Categories",
        }
        widget = {
            "title": forms.TextInput,
            "subtitle": forms.TextInput,
            "content": forms.Textarea,
            "category": forms.SelectMultiple,
        }
