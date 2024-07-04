from django.urls import path, include
from doctor.views import (
    DoctorView,
    ReviewView,
    SpecializationView,
    DesignationView,
    AvailableTimeView,
)
from rest_framework.routers import DefaultRouter

router = DefaultRouter()
router.register(r"doctor-list", DoctorView)
router.register(r"availabletime", AvailableTimeView)
router.register(r"designation", DesignationView)
router.register(r"specialization", SpecializationView)
router.register(r"review", ReviewView)

urlpatterns = [
    path("", include(router.urls)),
]
