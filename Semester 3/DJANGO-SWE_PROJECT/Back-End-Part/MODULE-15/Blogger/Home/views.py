from django.shortcuts import render
from Posts.models import PostsModel

# Create your views here.


def homepage(req):
    postsInfos = PostsModel.objects.all()
    return render(req, "Home/Home.html", {"posts": postsInfos})

