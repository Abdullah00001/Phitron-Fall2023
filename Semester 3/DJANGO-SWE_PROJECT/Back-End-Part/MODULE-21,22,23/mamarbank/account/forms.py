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


class UserUpdateForm(forms.ModelForm):
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
        ]

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
        if self.instance:
            try:
                user_account = self.instance.account
                user_address = self.instance.address
            except UserRegistrationModel.DoesNotExist:
                user_account = None
                user_address = None
            if user_account:
                self.fields["account_type"].initial = user_account.account_type
                self.fields["gender"].initial = user_account.gender
                self.fields["birth_date"].initial = user_account.birth_date
                self.fields["street_address"].initial = user_address.street_address
                self.fields["city"].initial = user_address.city
                self.fields["post_code"].initial = user_address.post_code
                self.fields["country"].initial = user_address.country

    def save(self, commit=True):
        requested_user = super().save(commit=False)
        if commit == True:
            requested_user.save()
            user_account, created = UserRegistrationModel.objects.get_or_create(
                user=requested_user
            )
            user_address, created = UserAddressModel.objects.get_or_create(
                user=requested_user
            )
            user_account.account_type = self.cleaned_data.get("account_type")
            user_account.birth_date = self.cleaned_data.get("birth_date")
            user_account.gender = self.cleaned_data.get("gender")
            user_account.save()
            user_address.street_address = self.cleaned_data.get("street_address")
            user_address.city = self.cleaned_data.get("city")
            user_address.post_code = self.cleaned_data.get("post_code")
            user_address.country = self.cleaned_data.get("country")
            user_address.save()
        return requested_user
