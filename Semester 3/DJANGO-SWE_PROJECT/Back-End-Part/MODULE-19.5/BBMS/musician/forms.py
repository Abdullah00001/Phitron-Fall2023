from django import forms
from musician.models import MusicianModel

INSTRUMENT_CHOICES = (
    ("guitar", "Guitar"),
    ("piano", "Piano"),
    ("drums", "Drums"),
    ("violin", "Violin"),
    ("flute", "Flute"),
    ("saxophone", "Saxophone"),
    ("trumpet", "Trumpet"),
    ("bass", "Bass"),
    ("cello", "Cello"),
)


class MusicianForm(forms.ModelForm):
    class Meta:
        model = MusicianModel
        exclude = [
            "author",
        ]
        labels = {
            "user_first_name": "First Name",
            "user_last_name": "Last Name",
            "user_email": "Email",
            "user_phone_number": "Phone",
            "user_instrument": "Select A Intrument",
        }

        widgets = {
            "user_first_name": forms.TextInput(),
            "user_last_name": forms.TextInput(),
            "user_email": forms.EmailInput(),
            "user_phone_number": forms.TextInput(),
            "user_instrument": forms.Select(choices=INSTRUMENT_CHOICES),
        }
