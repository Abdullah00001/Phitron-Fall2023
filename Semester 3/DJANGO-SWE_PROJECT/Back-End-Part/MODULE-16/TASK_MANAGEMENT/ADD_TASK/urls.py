from django.urls import path
from ADD_TASK.views import taskpage,edittask,deletetask

urlpatterns = [
    path("", taskpage, name="task"),
    path("Edit/<int:taskID>/",edittask,name="editTask"),
    path("Delete/<int:taskID>/",deletetask,name="deleteTask"),
]
