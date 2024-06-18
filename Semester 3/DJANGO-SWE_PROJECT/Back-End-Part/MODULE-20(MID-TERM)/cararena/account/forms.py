from django import forms
from django.contrib.auth.forms import UserCreationForm, UserChangeForm
from django.contrib.auth.models import User


class SignUpForm(UserCreationForm):
    first_name = forms.CharField(
        widget=forms.TextInput(
            attrs={
                "id": "required",
            }
        )
    )
    last_name = forms.CharField(
        widget=forms.TextInput(
            attrs={
                "id": "required",
            }
        )
    )
    email = forms.EmailField(
        widget=forms.EmailInput(
            attrs={
                "id": "required",
            }
        )
    )

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
            "username": "UserName",
            "email": "Email",
        }


class ProfileEditForm(UserChangeForm):
    password = None

    class Meta:
        model = User
        fields = [
            "first_name",
            "last_name",
            "email",
            "username",
        ]
        labels = {
            "first_name": "First Name",
            "last_name": "Last Name",
            "email": "Email",
            "username": "Username",
        }
