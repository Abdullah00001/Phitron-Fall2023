from django.db import models
from carinfo.models import CarDetailModel

# Create your models here.


class CommentModel(models.Model):
    user_name = models.CharField(max_length=60)
    comment_body = models.TextField()
    car_post = models.ForeignKey(CarDetailModel, on_delete=models.CASCADE,related_name="cmnt")
    creation_time = models.DateTimeField(auto_now_add=True)
    
    def __str__(self):
        return f"{self.user_name}"
