from django.db import models
from django.contrib.auth.models import User
from account.constants import ACCOUNT_TYPE, GENDER_TYPE

# Create your models here.


class UserRegistraionModel(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE, related_name="account")
    account_number = models.IntegerField(unique=True)
    account_type = models.CharField(max_length=100, choices=ACCOUNT_TYPE)
    birth_date = models.DateField()
    gender = models.CharField(max_length=100, choices=GENDER_TYPE)
    deposite_date = models.DateTimeField(auto_now_add=True)
    balance = models.IntegerField(default=0)

    def __str__(self):
        return f"{self.account_number}"


class UserAddressModel(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE, related_name="address")
    street_address = models.CharField(max_length=350)
    city = models.CharField(max_length=350)
    post_code = models.IntegerField()
    country = models.CharField(max_length=550)

    def __str__(self) -> str:
        return f"{self.user.first_name} {self.user.last_name}"
