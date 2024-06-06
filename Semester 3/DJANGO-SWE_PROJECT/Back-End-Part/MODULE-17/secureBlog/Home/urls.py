from django.urls import path
from Home.views import signupPage

urlpatterns = [
    path("", signupPage, name="signup"),
]
