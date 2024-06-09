from django.shortcuts import render
from Posts.models import PostsModel
from Category.models import CategoryModel

# Create your views here.


def homepage(req, cat_slug=None):
    postsInfos = PostsModel.objects.all()
    if cat_slug is not None:
        cats = CategoryModel.objects.get(nameSlug=cat_slug)
        postsInfos = PostsModel.objects.filter(category=cats)
    categories = CategoryModel.objects.all()
    return render(
        req, "Home/Home.html", {"posts": postsInfos, "categories": categories}
    )
