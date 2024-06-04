from django.urls import path
from ADD_CATEGORY.views import categorypage

urlpatterns = [
    path("",categorypage,name="category")
]
