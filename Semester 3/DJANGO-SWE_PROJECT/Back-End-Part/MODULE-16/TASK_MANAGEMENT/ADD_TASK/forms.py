from django import forms
from ADD_TASK.models import TaskModel


class TaskForm(forms.ModelForm):
    class Meta:
        model = TaskModel
        exclude=["taskAssignDate"]

        labels = {
            "taskTitle": "Task Title",
            "taskDescription": "Task Description",
            "is_Completed": "Task Status",
            "taskCategory": "Task Category",
        }

        widgets = {
            "taskTitle": forms.TextInput(
                attrs={"placeholder": "Type Task Title"}
            ),
            "taskDescription":forms.Textarea(attrs={"placeholder": "Type Task Description","rows":3}),
            "is_Completed":forms.CheckboxInput(),
            "taskCategory":forms.SelectMultiple
        }
