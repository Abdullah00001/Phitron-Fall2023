from django import forms

class contactForm(forms.Form):
    firstName=forms.CharField(label="First Name")
    lastName=forms.CharField(label="Last Name")
    date=forms.DateTimeField(label="Appointment Date")
    TOPICS=[("CW","Create Website"),("HP","FOR CODE HELP")]
    topic=forms.ChoiceField(choices=TOPICS,label="Choose Topic")
    USERTYPE=[("cl","client"),("pg","programmer")]
    selection=forms.Select(choices=USERTYPE)