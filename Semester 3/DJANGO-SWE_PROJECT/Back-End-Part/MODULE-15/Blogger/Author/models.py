from django.db import models


# Create your models here.
class AuthorModel(models.Model):
    name = models.CharField(max_length=100)
    email = models.EmailField()
    bio = models.TextField(default="Null")

    def __str__(self):
        return f"{self.name}"
