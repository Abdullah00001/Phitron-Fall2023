from django import forms
from django.core import validators


""" class signup(forms.Form):
    Name = forms.CharField(
        label="Name",
        required=False,
        validators=[validators.MaxLengthValidator(10, message="limit excceed")],
    )
    Email=forms.EmailField(label="Email",validators=[validators.EmailValidator(message="Please type Valid Email")]) """


class signup(forms.Form):
    Name = forms.CharField(label="Name", required=False, widget=forms.TextInput)
    Password = forms.CharField(label="Password", widget=forms.PasswordInput)
    Re_Password = forms.CharField(label="Retype Password", widget=forms.PasswordInput)

    def clean(self):
        cleaned_data = super().clean()
        print(self.cleaned_data)
        password = self.cleaned_data["Password"]
        repassword = self.cleaned_data["Re_Password"]
        if password != repassword:
            raise forms.ValidationError("Password Not Match")
        return cleaned_data
