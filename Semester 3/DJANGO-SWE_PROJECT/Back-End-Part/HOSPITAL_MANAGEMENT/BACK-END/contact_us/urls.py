from rest_framework.routers import DefaultRouter
from django.urls import path, include
from contact_us.views import Contact_usViewset

router = DefaultRouter()
router.register(r"", Contact_usViewset)

urlpatterns = [
    path("", include(router.urls)),
]
