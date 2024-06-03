from django import forms

languages = {
    ("py", "PYTHON"),
    ("cpp", "C++"),
    ("c", "C"),
    ("js", "JAVASCRIPT"),
    ("ts", "TYPESCRIPT"),
}

tracks = {
    ("swe", "Software Engeneering"),
    ("cp", "Competitive Programming"),
}

frameworks = {
    ("dj", "Django"),
    ("exp", "Express"),
    ("lv", "Laravel"),
}


class MainForm(forms.Form):
    name = forms.CharField(
        label="Name", widget=forms.TextInput(attrs={"placeholder": "Type Your Name"})
    )
    email = forms.EmailField(
        label="Email", widget=forms.EmailInput(attrs={"placeholder": "Type Your Email"})
    )
    dob = forms.DateField(
        label="Birth Date", widget=forms.TextInput(attrs={"type": "date"})
    )
    career = forms.ChoiceField(
        choices=tracks, label="Career Path", widget=forms.RadioSelect
    )
    langs = forms.MultipleChoiceField(
        choices=languages, label="Choose Languages", widget=forms.SelectMultiple
    )
    framework = forms.ChoiceField(choices=frameworks, label="Choose your Technology")
    classtime = forms.DateTimeField(
        label="Class Schedule",
        widget=forms.DateTimeInput(attrs={"type": "datetime-local"}),
        input_formats=["%d-%m-%y% %H:%M"],
    )
    classduration = forms.DurationField(
        label="Class Duration",
        widget=forms.TextInput(attrs={"placeholder": "Hour | Minute"}),
    )
    academiccgpa = forms.DecimalField(label="CGPA")
    message = forms.CharField(
        label="Message",
        widget=forms.Textarea(
            attrs={"placeholder": "Type Your Message Here . . .", "rows": 3}
        ),
    )
    terms = forms.BooleanField(label="Terms & Conditions", widget=forms.CheckboxInput)
