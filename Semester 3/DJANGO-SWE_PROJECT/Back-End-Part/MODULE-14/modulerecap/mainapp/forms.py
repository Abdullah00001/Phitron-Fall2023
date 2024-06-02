from django import forms
from mainapp.models import UserModel

GENDER_CHOICES = [
    ("m", "Male"),
    ("f", "Female"),
]
CITY_CHOICES = [
    ("dhaka", "Dhaka"),
    ("new_york", "New York"),
    ("london", "London"),
    ("tokyo", "Tokyo"),
    ("paris", "Paris"),
    ("beijing", "Beijing"),
    ("sydney", "Sydney"),
    ("mumbai", "Mumbai"),
    ("cairo", "Cairo"),
    ("moscow", "Moscow"),
    ("rio_de_janeiro", "Rio de Janeiro"),
    ("toronto", "Toronto"),
    ("berlin", "Berlin"),
    ("madrid", "Madrid"),
    ("rome", "Rome"),
]


class UserForm(forms.ModelForm):

    class Meta:
        model = UserModel
        exclude = [
            "userserial",
        ]
        labels = {
            "firstname": "First Name",
            "lastname": "Last Name",
            "username": "UserName",
            "useremail": "Email",
            "userdob": "Date Of Birth",
            "usergender": "Gender",
            "usercity": "Select your city",
            "usercountry": "Country",
            "useraddress": "Address",
            "userabout": "Description",
        }

        widgets = {
            "firstname": forms.TextInput(
                attrs={"placeholder": "Enter your First Name"}
            ),
            "lastname": forms.TextInput(attrs={"placeholder": "Enter your Last Name"}),
            "username": forms.TextInput(attrs={"placeholder": "Enter your  UserName"}),
            "useremail": forms.EmailInput(attrs={"placeholder": "Enter your Email"}),
            "userdob": forms.DateInput(
                attrs={"type": "date", "placeholder": "Year-Month-Date"}
            ),
            "usergender": forms.RadioSelect(choices=GENDER_CHOICES),
            "usercity": forms.Select(choices=CITY_CHOICES),
            "usercountry": forms.TextInput(attrs={"placeholder": "Enter your Country"}),
            "useraddress": forms.TextInput(
                attrs={
                    "placeholder": "Enter your Address",
                }
            ),
            "userabout": forms.Textarea(
                attrs={"placeholder": "Write About Your Self..."}
            ),
        }
