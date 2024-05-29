from django import forms


class contactform(forms.Form):
    userFirstName = forms.CharField(label="First Name")
    userLastName = forms.CharField(label="Last Name")
    userEmail = forms.EmailField(label="Email")
    userFile = forms.FileField()
