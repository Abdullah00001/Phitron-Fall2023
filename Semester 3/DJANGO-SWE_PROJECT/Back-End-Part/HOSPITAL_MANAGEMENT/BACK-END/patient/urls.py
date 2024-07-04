from django.urls import path, include
from patient.views import (
    PatientView,
    UserRegistrationView,
    activate,
    UserLoginView,
    UserLogoutView,
)
from rest_framework.routers import DefaultRouter

router = DefaultRouter()
router.register(r"list", PatientView)

urlpatterns = [
    path("", include(router.urls)),
    path("registration/", UserRegistrationView.as_view(), name="registration"),
    path("log-in/", UserLoginView.as_view(), name="login"),
    path("log-out/", UserLogoutView.as_view(), name="logout"),
    path("active/<uid64>/<token>", activate, name="activate"),
]
