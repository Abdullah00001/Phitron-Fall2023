from django.shortcuts import render
from .forms import contactForm

# Create your views here.


""" def signupPage(req):
    if req.method == "POST":
        userForm = contactForm(req.POST, req.FILES)
        if userForm.is_valid():
            userfiles = userForm.cleaned_data["uploadProfile"]
            with open("./MainApp/upload/" + userfiles.name, "wb+") as destination:
                for chunk in userfiles.chunks():
                    destination.write(chunk)
            print(userForm.cleaned_data)
    else:
        userForm = contactForm()
    return render(req, "MainApp/signup.html", {"contactForm": contactForm}) """


def signupPage(req):
    if req.method == "POST":
        contact_form = contactForm(req.POST)
        if contact_form.is_valid():
            print(contact_form.cleaned_data)
    else:
        contact_form = contactForm()
    return render(req, "MainApp/signup.html", {"contactForm": contactForm})
