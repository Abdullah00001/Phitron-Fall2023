from django.shortcuts import render,redirect
from Author.forms import AuthorForm

# Create your views here.


def authorpage(req):
    if req.method == "POST":
        form = AuthorForm(req.POST)
        if form.is_valid():
            form.save()
            return redirect('author')
    else:
        form = AuthorForm()
    form = AuthorForm()
    return render(req, "Author/add_Author.html", {"form": form})
