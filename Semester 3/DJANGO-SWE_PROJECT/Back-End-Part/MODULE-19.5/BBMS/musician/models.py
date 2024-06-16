from django.db import models
from album.models import AlbumModel

# Create your models here.


class MusicianModel(models.Model):
    user_first_name = models.CharField(max_length=250)
    user_last_name = models.CharField(max_length=250)
    user_email = models.EmailField()
    user_phone_number = models.CharField(max_length=12)
    user_instrument = models.CharField(max_length=500)
    album = models.ForeignKey(
        AlbumModel, on_delete=models.CASCADE, null=True, blank=True
    )

    def __str__(self):
        return f"{self.user_first_name}{self.user_last_name}"
