from django.db import models

# Create your models here.


class CategoryModel(models.Model):
    categoryName = models.CharField(max_length=150)
    
    def __str__(self):
        return f"{self.categoryName}"
