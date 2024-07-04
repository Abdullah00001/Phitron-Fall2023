from rest_framework.routers import DefaultRouter
from django.urls import path, include
from appointment.views import AppointmentView

router = DefaultRouter()
router.register(r"", AppointmentView)

urlpatterns = [
    path("", include(router.urls)),
]
