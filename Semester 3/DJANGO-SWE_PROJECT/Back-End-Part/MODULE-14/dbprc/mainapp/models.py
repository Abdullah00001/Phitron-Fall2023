from django.db import models

# Create your models here.

class Users(models.Model):
    first_Name=models.CharField(max_length=15)
    last_Name=models.CharField(max_length=15)
    user_Email=models.EmailField(primary_key=True)
    user_Password=models.CharField(max_length=20)