from django.db import models

# Create your models here.


class StudentModel(models.Model):
    studentName = models.CharField(max_length=50)
    fatherName = models.CharField(max_length=50)
    motherName = models.CharField(max_length=50)
    studentAddress = models.TextField()
    studentAge = models.IntegerField()
    serialId = models.IntegerField(primary_key=True)

    def __str__(self):
        return f"{self.serialId} : {self.studentName}"
