from django.contrib import admin
from account.models import UserRegistrationModel, UserAddressModel

# Register your models here.
admin.site.register(UserRegistrationModel)
admin.site.register(UserAddressModel)
