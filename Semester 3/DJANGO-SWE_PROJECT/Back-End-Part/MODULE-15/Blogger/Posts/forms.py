from django import forms
from Posts.models import PostsModel


class PostForm(forms.ModelForm):
    class Meta:
        model = PostsModel
        fields = "__all__"
        labels = {
            "title": "Post Title",
            "subtitle": "Post Sub-Title",
            "content": "Post Content",
            "category": "Select Categories",
            "author": "Select Author",
        }
        widget = {
            "title": forms.TextInput,
            "subtitle": forms.TextInput,
            "content": forms.Textarea,
            "category": forms.SelectMultiple,
            "author": forms.Select,
        }
