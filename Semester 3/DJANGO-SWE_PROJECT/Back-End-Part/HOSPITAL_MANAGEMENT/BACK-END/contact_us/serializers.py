from rest_framework import serializers
from contact_us.models import ContactUs

class Contact_UsSerializer(serializers.ModelSerializer):
    class Meta:
        model=ContactUs
        fields='__all__'