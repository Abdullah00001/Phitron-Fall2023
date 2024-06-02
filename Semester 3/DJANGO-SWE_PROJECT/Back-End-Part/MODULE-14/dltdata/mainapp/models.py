from django.db import models

# Create your models here.


class Users(models.Model):
    userName = models.CharField(max_length=30)
    userEmail = models.EmailField(max_length=150)
    userAddress = models.CharField(max_length=250)
    postTitle = models.CharField(max_length=50)
    userPost = models.TextField(max_length=1000)
    usersID = models.IntegerField(default=0,primary_key=True)
    
    def __str__(self):
        return self.userName
