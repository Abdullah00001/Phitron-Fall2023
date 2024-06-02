from django.shortcuts import render, redirect
from Posts.forms import PostForm


# Create your views here.
def createPost(req):
    if req.method == "POST":
        Post_form = PostForm(req.POST)
        if Post_form.is_valid():
            Post_form.save()
            return redirect("Add_Post")
    else:
        Post_form = PostForm()
    Post_form = PostForm()
    return render(req, "Post/add_Post.html", {"Post_form": Post_form})
