from django.db import models

# Create your models here.
class MainModel(models.Model):
    name=models.CharField(max_length=250)
    email=models.EmailField()
    dob=models.DateField()
    schedule=models.DateTimeField()
    duartion=models.DurationField()
    cgpa=models.DecimalField(max_digits=5,decimal_places=5)
    careerpath=models.BooleanField()
    email=models.EmailField()
    balance=models.BigIntegerField()