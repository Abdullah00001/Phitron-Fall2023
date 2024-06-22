from django.contrib import admin
#from account.models import UserBankAccount, UserAddress
from account.models import UserRegistrationModel, UserAddressModel

# Register your models here.

""" admin.site.register(UserBankAccount)
admin.site.register(UserAddress) """
admin.site.register(UserRegistrationModel)
admin.site.register(UserAddressModel)
