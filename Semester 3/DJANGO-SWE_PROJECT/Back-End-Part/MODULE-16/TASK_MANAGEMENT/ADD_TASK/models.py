from django.db import models
from ADD_CATEGORY.models import CategoryModel

# Create your models here.


class TaskModel(models.Model):
    taskTitle = models.CharField(max_length=250)
    taskDescription = models.TextField()
    is_Completed = models.BooleanField(default=False)
    taskAssignDate = models.DateTimeField(auto_now=True)
    taskCategory = models.ManyToManyField(CategoryModel)
    
    def __str__(self):
        return f"{self.taskTitle}"
