from django.db import models

# Create your models here.


class UserModel(models.Model):
    firstname = models.CharField(max_length=100)
    lastname = models.CharField(max_length=100)
    username = models.CharField(max_length=30)
    useremail = models.EmailField()
    userdob = models.DateField()
    usergender = models.CharField(max_length=6)
    usercity = models.CharField(max_length=100)
    usercountry = models.CharField(max_length=180)
    useraddress = models.CharField(max_length=400)
    userabout = models.TextField()
    userserial = models.IntegerField(primary_key=True)

    def __str__(self):
        return f"{self.userserial} : {self.username}"
