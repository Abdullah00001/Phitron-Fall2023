from django.shortcuts import render, redirect
from ADD_CATEGORY.forms import CategoryForm
from ADD_CATEGORY.models import CategoryModel

# Create your views here.


def categorypage(req):
    if req.method == "POST":
        form = CategoryForm(req.POST)
        if form.is_valid():
            form.save()
            return redirect("main")
    else:
        form = CategoryForm()
    form = CategoryForm()
    return render(req, "ADD_CATEGORY/addcategory.html", {"form": form})
