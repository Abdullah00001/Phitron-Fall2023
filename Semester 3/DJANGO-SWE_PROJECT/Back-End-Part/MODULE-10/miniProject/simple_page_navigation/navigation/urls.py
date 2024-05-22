from django.urls import path
from . import views
urlpatterns = [
    path("about/",views.aboutPage),
    path("contact/",views.contactPage),
]
