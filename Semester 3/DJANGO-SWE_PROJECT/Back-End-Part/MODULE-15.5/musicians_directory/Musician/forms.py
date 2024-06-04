from django import forms
from Musician.models import MusicianModel

instrument_choice = [
    ("EI", "Electronic Instruments"),
    ("KI", "Keyboard Instruments"),
    ("PI", "Percussion Instruments"),
    ("BI", "Brass Instruments"),
    ("WI", "Woodwind Instruments"),
    ("SI", "String Instruments"),
]


class MusicianForm(forms.ModelForm):
    class Meta:
        model = MusicianModel
        fields = "__all__"
        labels = {
            "firstname": "First Name",
            "lastname": "Last Name",
            "useremail": "Email",
            "userphone": "Phone",
            "intrumenttype": "Instrument type",
        }
        widgets = {
            "firstname": forms.TextInput(
                attrs={"placeholder": "Enter your First Name"}
            ),
            "lastname": forms.TextInput(attrs={"placeholder": "Enter your Last Name"}),
            "useremail": forms.EmailInput(attrs={"placeholder": "Enter your Email"}),
            "userphone": forms.TextInput(
                attrs={"placeholder": "Enter your Contact Number"}
            ),
            "intrumenttype": forms.Select(choices=instrument_choice),
        }
