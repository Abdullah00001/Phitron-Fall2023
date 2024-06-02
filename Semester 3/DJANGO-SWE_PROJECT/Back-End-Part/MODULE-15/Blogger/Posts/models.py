from django.db import models
from Category.models import CategoryModel
from Author.models import AuthorModel

# Create your models here.
class PostsModel(models.Model):
    title = models.CharField(max_length=100)
    subtitle = models.CharField(max_length=200)
    content = models.TextField()
    category = models.ManyToManyField(CategoryModel)
    author=models.ForeignKey(AuthorModel,on_delete=models.CASCADE)
    
    def __str__(self):
        return f"{self.title}"