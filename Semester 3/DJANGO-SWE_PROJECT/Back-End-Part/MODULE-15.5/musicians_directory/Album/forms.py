from django import forms
from Album.models import AlbumModel


class AlbumForm(forms.ModelForm):
    class Meta:
        model = AlbumModel
        exclude = ["albumreleasedate"]
        labels = {
            "albumname": "Album Name",
            "albumrating": "Rate The Album",
        }
        widgets = {
            "albumname": forms.TextInput(attrs={"placeholder": "Enter Album Name"}),
            "albumrating": forms.TextInput(attrs={"placeholder": "Enter Album Name"}),
        }
