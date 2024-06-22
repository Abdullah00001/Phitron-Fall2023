from django.db import models
from django.contrib.auth.models import User
from account.constants import ACCOUNT_TYPE, GENDER_TYPE

# Create your models here.


class UserRegistrationModel(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE, related_name="account",null=True,blank=True)
    account_number = models.IntegerField(unique=True,null=True,blank=True)
    account_type = models.CharField(max_length=100, choices=ACCOUNT_TYPE,null=True,blank=True)
    birth_date = models.DateField(null=True,blank=True)
    gender = models.CharField(max_length=100, choices=GENDER_TYPE,null=True,blank=True)
    deposite_date = models.DateTimeField(auto_now_add=True,null=True,blank=True)
    balance = models.IntegerField(default=0,null=True,blank=True)

    def __str__(self):
        return f"{self.account_number}"


class UserAddressModel(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE, related_name="address",null=True,blank=True)
    street_address = models.CharField(max_length=350,null=True,blank=True)
    city = models.CharField(max_length=350,null=True,blank=True)
    post_code = models.IntegerField(null=True,blank=True)
    country = models.CharField(max_length=550,null=True,blank=True)

    def __str__(self) -> str:
        return f"{self.user.first_name} {self.user.last_name}"

""" from django.db import models
from django.contrib.auth.models import User
from account.constants import ACCOUNT_TYPE, GENDER_TYPE

# django amaderke built in user niye kaj korar facility dey


class UserRegistrationModel(models.Model):
    user = models.OneToOneField(User, related_name="account", on_delete=models.CASCADE,null=True,blank=True)
    account_type = models.CharField(max_length=10, choices=ACCOUNT_TYPE,null=True,blank=True)
    account_no = models.IntegerField(
        unique=True,null=True,blank=True
    )  # account no duijon user er kokhono same hobe na
    birth_date = models.DateField(null=True, blank=True)
    gender = models.CharField(max_length=10, choices=GENDER_TYPE,null=True,blank=True)
    initial_deposite_date = models.DateField(auto_now_add=True,null=True,blank=True)
    balance = models.DecimalField(
        default=0, max_digits=12, decimal_places=2,null=True,blank=True
    )  # ekjon user 12 digit obdi taka rakhte parbe, dui doshomik ghor obdi rakhte parben 1000.50

    def __str__(self):
        return str(self.account_no)


class UserAddressModel(models.Model):
    user = models.OneToOneField(User, related_name="address", on_delete=models.CASCADE,null=True,blank=True)
    street_address = models.CharField(max_length=100,null=True,blank=True)
    city = models.CharField(max_length=100,null=True,blank=True)
    postal_code = models.IntegerField(null=True,blank=True)
    country = models.CharField(max_length=100,null=True,blank=True)

    def __str__(self):
        return str(self.user.email)
 """