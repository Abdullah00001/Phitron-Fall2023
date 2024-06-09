""" from django.shortcuts import render, redirect
from Category.forms import CategoryForm

# Create your views here.


def add_Category(req):
    if req.method == "POST":
        form = CategoryForm(req.POST)
        if form.is_valid():
            form.save()
            return redirect("category")
    else:
        form = CategoryForm()
    form = CategoryForm()
    return render(req, "Category/add_category.html", {"form": form}) """
