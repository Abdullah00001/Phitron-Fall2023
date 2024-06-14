from django import forms
from album.models import AlbumModel


class AlbumForm(forms.ModelForm):
    class Meta:
        model = AlbumModel
        exclude = [
            "album_release_date",
        ]

        labels = {
            "album_name": "Album Name",
            "musician": "Choose A Musician",
            "album_ratings": "Ratings",
        }
        widgets = {
            "musician": forms.Select(),
        }
