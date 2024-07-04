from django.shortcuts import render
from appointment.models import Appointment
from appointment.serializers import AppointmentSerializer
from rest_framework import viewsets

# Create your views here.


class AppointmentView(viewsets.ModelViewSet):
    queryset = Appointment.objects.all()
    serializer_class = AppointmentSerializer

    def get_queryset(self):
        queryset = super().get_queryset()

        patient_id = self.request.query_params.get("patient_id")
        if patient_id:
            queryset = queryset.filter(patient_id=patient_id)
        return queryset

