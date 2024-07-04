from django.shortcuts import render
from rest_framework import viewsets
from service.serializers import ServiceSerializer
from service.models import Service
# Create your views here.

class ServiceView(viewsets.ModelViewSet):
    queryset=Service.objects.all()
    serializer_class=ServiceSerializer