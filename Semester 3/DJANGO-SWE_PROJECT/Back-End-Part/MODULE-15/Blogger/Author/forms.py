from django import forms
from Author.models import AuthorModel


class AuthorForm(forms.ModelForm):
    class Meta:
        model = AuthorModel
        fields = "__all__"
        labels = {
            "name": "Name",
            "email": "Email",
            "bio": "Bio",
        }
