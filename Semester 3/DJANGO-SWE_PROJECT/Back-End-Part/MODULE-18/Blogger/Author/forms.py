from django import forms

""" from Author.models import AuthorModel """
from django.contrib.auth.forms import UserCreationForm, UserChangeForm
from django.contrib.auth.models import User


""" class AuthorForm(forms.ModelForm):
    class Meta:
        model = AuthorModel
        fields = "__all__"
        labels = {
            "name": "Name",
            "email": "Email",
            "bio": "Bio",
        } """


class SignupForm(UserCreationForm):
    first_name = forms.CharField(widget=forms.TextInput(attrs={"id": "required"}))
    last_name = forms.CharField(widget=forms.TextInput(attrs={"id": "required"}))
    email = forms.EmailField(widget=forms.EmailInput(attrs={"id": "required"}))

    class Meta:
        model = User
        fields = [
            "first_name",
            "last_name",
            "username",
            "email",
        ]
        labels = {
            "first_name": "First Name",
            "last_name": "Last Name",
            "username": "User Name",
            "email": "Email",
        }


class EditProfileForm(UserChangeForm):
    password = None

    class Meta:
        model=User
        fields = [
            "first_name",
            "last_name",
            "username",
            "email",
        ]
        labels = {
            "first_name": "First Name",
            "last_name": "Last Name",
            "username": "User Name",
            "email": "Email",
        }
