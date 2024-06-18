from django.urls import path
from carinfo.views import PostDetailsPageView

urlpatterns = [
    path("car-details/<int:pk>/", PostDetailsPageView.as_view(), name="detail"),
]
