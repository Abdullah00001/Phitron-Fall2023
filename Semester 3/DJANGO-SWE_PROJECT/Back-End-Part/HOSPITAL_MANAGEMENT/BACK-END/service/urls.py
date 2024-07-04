from django.urls import path, include
from service.views import ServiceView
from rest_framework.routers import DefaultRouter

router = DefaultRouter()
router.register(r"", ServiceView)

urlpatterns = [
    path("", include(router.urls)),
]
