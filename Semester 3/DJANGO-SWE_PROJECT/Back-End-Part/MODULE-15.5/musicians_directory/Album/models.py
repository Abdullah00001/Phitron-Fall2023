from django.db import models
from django.core.validators import MinValueValidator, MaxValueValidator

# Create your models here.


class AlbumModel(models.Model):
    albumname = models.CharField(max_length=80)
    albumreleasedate = models.DateTimeField(auto_now=True)
    albumrating = models.FloatField(
        validators=[MinValueValidator(1.0), MaxValueValidator(5.0)]
    )

    def __str__(self):
        return f"{self.albumname}"
