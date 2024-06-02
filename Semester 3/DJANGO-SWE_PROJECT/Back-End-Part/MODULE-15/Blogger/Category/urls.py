from django.urls import path
from Category.views import add_Category

urlpatterns = [
    path("",add_Category,name='category')
]
