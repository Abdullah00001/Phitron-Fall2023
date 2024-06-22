from django import forms
from django.contrib.auth.models import User
from django.contrib.auth.forms import UserCreationForm
from account.constants import ACCOUNT_TYPE, GENDER_TYPE
from account.models import UserRegistrationModel, UserAddressModel
import random


class UserRegistrationForm(UserCreationForm):
    account_type = forms.ChoiceField(choices=ACCOUNT_TYPE)
    birth_date = forms.DateField(widget=forms.DateInput(attrs={"type": "date"}))
    gender = forms.ChoiceField(choices=GENDER_TYPE)
    street_address = forms.CharField(max_length=350)
    city = forms.CharField(max_length=350)
    post_code = forms.IntegerField()
    country = forms.CharField(max_length=550)

    class Meta:
        model = User
        fields = [
            "first_name",
            "last_name",
            "username",
            "email",
            "password1",
            "password2",
            "account_type",
            "birth_date",
            "gender",
            "street_address",
            "city",
            "post_code",
            "country",
        ]

    def save(self, commit=True):
        requested_user = super().save(commit=False)
        if commit == True:
            requested_user.save()
            account_type = self.cleaned_data.get("account_type")
            birth_date = self.cleaned_data.get("birth_date")
            gender = self.cleaned_data.get("gender")
            street_address = self.cleaned_data.get("street_address")
            city = self.cleaned_data.get("city")
            post_code = self.cleaned_data.get("post_code")
            country = self.cleaned_data.get("country")

            UserRegistrationModel.objects.create(
                user=requested_user,
                account_type=account_type,
                birth_date=birth_date,
                gender=gender,
                account_number=random.randint(100000, 999999) + requested_user.id,
            )

            UserAddressModel.objects.create(
                user=requested_user,
                street_address=street_address,
                city=city,
                post_code=post_code,
                country=country,
            )
        return requested_user

    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)

        for field in self.fields:
            self.fields[field].widget.attrs.update(
                {
                    "class": (
                        "appearance-none block w-full bg-gray-200 "
                        "text-gray-700 border border-gray-200 rounded "
                        "py-3 px-4 leading-tight focus:outline-none "
                        "focus:bg-white focus:border-gray-500"
                    )
                }
            )

""" from django.contrib.auth.forms import UserCreationForm
from django import forms
from account.constants import ACCOUNT_TYPE, GENDER_TYPE
from django.contrib.auth.models import User
from account.models import UserRegistrationModel, UserAddressModel


class UserRegistrationForm(UserCreationForm):
    birth_date = forms.DateField(widget=forms.DateInput(attrs={"type": "date"}))
    gender = forms.ChoiceField(choices=GENDER_TYPE)
    account_type = forms.ChoiceField(choices=ACCOUNT_TYPE)
    street_address = forms.CharField(max_length=100)
    city = forms.CharField(max_length=100)
    postal_code = forms.IntegerField()
    country = forms.CharField(max_length=100)

    class Meta:
        model = User
        fields = [
            "username",
            "password1",
            "password2",
            "first_name",
            "last_name",
            "email",
            "account_type",
            "birth_date",
            "gender",
            "postal_code",
            "city",
            "country",
            "street_address",
        ]

        # form.save()

    def save(self, commit=True):
        our_user = super().save(commit=False)  # ami database e data save korbo na ekhn
        if commit == True:
            our_user.save()  # user model e data save korlam
            account_type = self.cleaned_data.get("account_type")
            gender = self.cleaned_data.get("gender")
            postal_code = self.cleaned_data.get("postal_code")
            country = self.cleaned_data.get("country")
            birth_date = self.cleaned_data.get("birth_date")
            city = self.cleaned_data.get("city")
            street_address = self.cleaned_data.get("street_address")

            UserAddressModel.objects.create(
                user=our_user,
                postal_code=postal_code,
                country=country,
                city=city,
                street_address=street_address,
            )
            UserRegistrationModel.objects.create(
                user=our_user,
                account_type=account_type,
                gender=gender,
                birth_date=birth_date,
                account_no=100000 + our_user.id,
            )
        return our_user

    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)

        for field in self.fields:
            self.fields[field].widget.attrs.update(
                {
                    "class": (
                        "appearance-none block w-full bg-gray-200 "
                        "text-gray-700 border border-gray-200 rounded "
                        "py-3 px-4 leading-tight focus:outline-none "
                        "focus:bg-white focus:border-gray-500"
                    )
                }
            )
 """