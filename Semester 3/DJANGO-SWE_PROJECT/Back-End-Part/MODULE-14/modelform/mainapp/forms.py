from django import forms
from mainapp.models import StudentModel


class StudentForm(forms.ModelForm):
    class Meta:
        model = StudentModel
        # fields='__all__'
        exclude = [
            "serialId",
        ]
        labels = {
            "studentName": "Student Name",
            "fatherName": "Father Name",
            "motherName": "Mother Name",
            "studentAddress": "Address",
            "studentAge": "Age",
        }
        
        widget = {
            "studentName": forms.TextInput,
            "fatherName": forms.TextInput,
            "motherName": forms.TextInput,
            "studentAddress": forms.TextInput,
            "studentAge": forms.NumberInput,
        }
        
        error_messages = {
            "studentName": {"required":"name must be required"},
        }
