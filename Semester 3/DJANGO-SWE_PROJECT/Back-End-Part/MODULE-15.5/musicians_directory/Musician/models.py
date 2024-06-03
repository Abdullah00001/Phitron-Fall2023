from django.db import models
from Album.models import AlbumModel

# Create your models here.


class MusicianModel(models.Model):
    firstname = models.CharField(max_length=60)
    lastname = models.CharField(max_length=60)
    useremail = models.EmailField()
    userphone = models.CharField(max_length=12)
    intrumenttype = models.CharField(max_length=150)
    album = models.ForeignKey(AlbumModel, on_delete=models.CASCADE)

    def __str__(self):
        return f"{self.firstname} {self.lastname}"
