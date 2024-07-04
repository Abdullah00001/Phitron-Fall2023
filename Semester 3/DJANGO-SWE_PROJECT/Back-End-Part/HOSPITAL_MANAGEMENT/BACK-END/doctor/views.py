from django.shortcuts import render
from rest_framework import viewsets
from doctor.models import Doctor, Review, Specialization, Designation, AvailableTime
from doctor.serializers import (
    DoctorSerializer,
    DesignationSerializer,
    SpecializationSerializer,
    ReviewSerializer,
    AvailableTimeSerializer,
)

# Create your views here.


class DoctorView(viewsets.ModelViewSet):
    queryset = Doctor.objects.all()
    serializer_class = DoctorSerializer


class ReviewView(viewsets.ModelViewSet):
    queryset = Review.objects.all()
    serializer_class = ReviewSerializer


class SpecializationView(viewsets.ModelViewSet):
    queryset = Specialization.objects.all()
    serializer_class = SpecializationSerializer


class DesignationView(viewsets.ModelViewSet):
    queryset = Designation.objects.all()
    serializer_class = DesignationSerializer


class AvailableTimeView(viewsets.ModelViewSet):
    queryset = AvailableTime.objects.all()
    serializer_class = AvailableTimeSerializer
