from django.db import models
from django.core.validators import MinValueValidator, MaxValueValidator


# Create your models here.


class AlbumModel(models.Model):
    album_name = models.CharField(max_length=350)
    album_release_date = models.DateField(auto_now_add=True)
    album_ratings = models.FloatField(
        validators=[MinValueValidator(1.0), MaxValueValidator(5.0)]
    )
    def __str__(self):
        return f"{self.album_name}"
