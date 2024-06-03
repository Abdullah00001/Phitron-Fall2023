from django.shortcuts import render, redirect
from Posts.forms import PostForm
from Posts.models import PostsModel

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
    return render(req, "Post/add_Post.html", {"Post_form": Post_form,"btn_flag":False})


def editpost(req,postID):
    post=PostsModel.objects.get(pk=postID)
    Post_form = PostForm(instance=post)
    if req.method == "POST":
        Post_form = PostForm(req.POST,instance=post)
        if Post_form.is_valid():
            Post_form.save()
            return redirect("home")
    return render(req, "Post/add_Post.html", {"Post_form": Post_form,"btn_flag":True})

def deletepost(req,postID):
    post= PostsModel.objects.get(pk=postID).delete()
    return redirect("home")