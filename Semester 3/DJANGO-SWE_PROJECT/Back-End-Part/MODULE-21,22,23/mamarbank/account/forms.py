from django import forms
from django.contrib.auth.models import User
from django.contrib.auth.forms import UserCreationForm
from account.constants import ACCOUNT_TYPE, GENDER_TYPE
from account.models import UserRegistraionModel, UserAddressModel
import random


class UserRegistrationForm(UserCreationForm):
    account_type = forms.ChoiceField(choices=ACCOUNT_TYPE)
    birth_date = forms.DateField(widget=forms.DateInput(attrs={"type": "date "}))
    gender = forms.ChoiceField(choices=GENDER_TYPE)
    street_address = forms.CharField(max_length=350)
    city = forms.CharField(max_length=350)
    post_code = forms.IntegerField()
    country = forms.CharField(max_length=550)

    class Meta:
        model = User
        fields = (
            "first_name",
            "last_name",
            "username",
            "email",
            "account_type",
            "birth_date",
            "gender",
            "street_address",
            "city",
            "post_code",
            "country",
        )

    def save(self, commit=True):
        requested_user = super().save(commit=False)
        if commit:
            requested_user.save()
            account_type = self.cleaned_data["account_type"]
            birth_date = self.cleaned_data["birth_date"]
            gender = self.cleaned_data["gender"]
            street_address = self.cleaned_data["street_address"]
            city = self.cleaned_data["city"]
            post_code = self.cleaned_data["post_code"]
            country = self.cleaned_data["country"]

            UserRegistraionModel.objects.create(
                user=requested_user,
                account_type=account_type,
                birth_date=birth_date,
                gender=gender,
            )

            UserAddressModel.objects.create(
                user=requested_user,
                street_address=street_address,
                city=city,
                post_code=post_code,
                country=country,
                account_number=random.randint(100000, 999999) + requested_user.id,
            )
            return requested_user
