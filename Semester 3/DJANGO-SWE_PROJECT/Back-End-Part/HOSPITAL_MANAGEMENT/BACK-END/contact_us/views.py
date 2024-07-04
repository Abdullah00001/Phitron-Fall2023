from django.shortcuts import render
from rest_framework import viewsets
from contact_us.models import ContactUs
from contact_us.serializers import Contact_UsSerializer

# Create your views here.


class Contact_usViewset(viewsets.ModelViewSet):
    queryset = ContactUs.objects.all()
    serializer_class = Contact_UsSerializer
