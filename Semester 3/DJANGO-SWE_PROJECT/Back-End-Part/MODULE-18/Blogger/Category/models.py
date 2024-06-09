from django.db import models


# Create your models here.
class CategoryModel(models.Model):
    name = models.CharField(max_length=100)
    nameSlug = models.SlugField(unique=True, blank=True, null=True, max_length=400)

    def __str__(self):
        return f"{self.name}"
