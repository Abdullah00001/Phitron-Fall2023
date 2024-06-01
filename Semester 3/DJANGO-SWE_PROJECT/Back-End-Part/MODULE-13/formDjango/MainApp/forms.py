from typing import Any
from django import forms
from django.core import validators

""" class contactForm(forms.Form):
    firstname=forms.CharField(label="First Name", help_text="please type your name")
    lastname=forms.CharField(label="Last Name")
    comment=forms.CharField(widget=forms.Textarea)
    uploadProfile=forms.FileField() """


""" class contactForm(forms.Form):
    firstname = forms.CharField(
        label="First Name",
        help_text="please type your name",
        required=False,
        disabled=False,
        widget=forms.TextInput(attrs={"placeholder": "Please Type Your Name"}),
    )
    massage = forms.CharField(
        label="Massage",
        help_text="Write A Massage Under 111 Words",
        widget=forms.Textarea(
            attrs={"placeholder": "Type your Massage here. \n exmp: 'Hi there ...!'"}
        ),
    )
    check = forms.BooleanField(label="True", required=False)
    date = forms.DateField(
        label="Please Chose Date", widget=forms.DateInput(attrs={"type": "date"})
    )
    time = forms.TimeField(
        label="Please Choose Your Available Time",
        widget=forms.TimeInput(attrs={"type": "time", "placeholder": "Hour : Minute"}),
    )
    choieces = [("s", "small"), ("m", "madium"), ("l", "large")]
    size = forms.ChoiceField(
        choices=choieces, label="T-Shirt Size", widget=forms.RadioSelect
    )
    meals = [
        ("brg", "Burger"),
        ("rc", "Rice"),
        ("chk", "Chicken"),
        ("pl", "Polao"),
        ("bry", "Biriyani"),
        ("nr", "Naan Roti"),
        ("grl", "Grill"),
    ]
    selectmeals = forms.MultipleChoiceField(
        label="please choocse your meals",
        choices=meals,
        widget=forms.CheckboxSelectMultiple,
    ) """


""" def namelen(value):
    print(value)
    if len(value) < 10:
        print(value)
        raise forms.ValidationError("len is short") """


class contactForm(forms.Form):
    FirstName = forms.CharField(
        label="First Name",
        widget=forms.TextInput,
        required=False,
        validators=[validators.MinLengthValidator(10, message="at least 10 charater")],
    )
    LastName = forms.CharField(
        label="Last Name", widget=forms.TextInput, required=False
    )
    emails = forms.EmailField(
        label="Last Name", widget=forms.EmailInput, required=False
    )

    """ def namelen(self):
        userfstName=self.cleaned_data["FirstName"]
        print(userfstName)
        if len(userfstName) < 10:
            print(userfstName)
            raise forms.ValidationError("len is short")
        return userfstName
    
    def checkEmail(self):
        useremail = self.cleaned_data["emails"]
        print(useremail)
        if ".com" not in useremail:
            print(useremail)
            raise forms.ValidationError("give .com") """

    """ def clean(self):
        cleaned_data = super().clean()
        userfstName = cleaned_data["FirstName"]
        useremail = cleaned_data["emails"]
        if len(userfstName) < 10:
            print(userfstName)
            raise forms.ValidationError("len is short")
        if ".com" not in useremail:
            print(useremail)
            raise forms.ValidationError("give .com") """
