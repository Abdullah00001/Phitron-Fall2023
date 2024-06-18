from django.db import models
from carinfo.models import CarDetailModel
from django.contrib.auth.models import User
# Create your models here.

class PaymentModel(models.Model):
    car_model=models.ForeignKey(CarDetailModel,on_delete=models.CASCADE)
    user=models.ForeignKey(User,on_delete=models.CASCADE)
    purchese_date=models.DateTimeField(auto_now_add=True)
    net_quantity=models.IntegerField()
    total_price=models.IntegerField()