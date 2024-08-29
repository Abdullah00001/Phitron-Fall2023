from django.db import models
from carbrand.models import CarBrandModel

# Create your models here.


class CarDetailModel(models.Model):
    car_name = models.CharField(max_length=350)
    car_brand = models.ForeignKey(CarBrandModel, on_delete=models.CASCADE)
    car_title = models.CharField(max_length=450)
    car_description = models.TextField()
    car_quantity = models.IntegerField()
    car_price = models.IntegerField()
    car_image = models.ImageField(upload_to="carinfo/media/upload")
    
    def __str__(self):
        return f"{self.car_name}"
    
#car_name,car_title,car_description,car_quantity,car_price