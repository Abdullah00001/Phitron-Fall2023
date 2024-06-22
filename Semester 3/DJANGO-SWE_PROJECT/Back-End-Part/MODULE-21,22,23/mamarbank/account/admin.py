from django.contrib import admin
from account.models import UserRegistraionModel, UserAddressModel

# Register your models here.

admin.site.register(UserRegistraionModel)
admin.site.register(UserAddressModel)
