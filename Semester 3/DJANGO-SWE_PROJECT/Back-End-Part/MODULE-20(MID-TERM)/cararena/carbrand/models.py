from django.db import models

# Create your models here.


class CarBrandModel(models.Model):
    brand_name = models.CharField(max_length=450)
    slug = models.SlugField(max_length=500, unique=True)

    def __str__(self):
        return f"{self.brand_name}"
