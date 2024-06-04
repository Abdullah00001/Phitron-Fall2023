from django.urls import path, include
from MAIN.views import mainpage,homepage

urlpatterns = [
    path("",homepage,name="home"),
    path("View Task", mainpage, name="main"),
    path("Add Task/", include("ADD_TASK.urls")),
    path("Add Category/", include("ADD_CATEGORY.urls")),
]
