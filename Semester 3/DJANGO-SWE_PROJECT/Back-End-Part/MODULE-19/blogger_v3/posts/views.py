from django.urls import reverse_lazy
from django.shortcuts import render, redirect
from django.views.generic.edit import CreateView, UpdateView, DeleteView
from django.views.generic import DetailView
from posts.forms import CreatePostForm, CommentForm
from posts.models import PostModel, PostCommentModel
from django.utils.decorators import method_decorator
from django.contrib.auth.decorators import login_required

# Create your views here.


@method_decorator(login_required, name="dispatch")
class CreatePostView(CreateView):
    form_class = CreatePostForm
    template_name = "posts/createpost.html"
    success_url = reverse_lazy("profile")

    def form_valid(self, form: CreatePostForm):
        form.instance.post_author = self.request.user
        return super().form_valid(form)


@method_decorator(login_required, name="dispatch")
class UpdatePostView(UpdateView):
    model = PostModel
    form_class = CreatePostForm
    template_name = "posts/updatepost.html"
    pk_url_kwarg = "postId"
    success_url = reverse_lazy("profile")

    def form_valid(self, form: CreatePostForm):
        form.instance.post_author = self.request.user
        return super().form_valid(form)


@method_decorator(login_required, name="dispatch")
class DeletePostView(DeleteView):
    model = PostModel
    template_name = "posts/deletepost.html"
    pk_url_kwarg = "postId"
    success_url = reverse_lazy("profile")


@method_decorator(login_required, name="dispatch")
class DeleteCommentView(DeleteView):
    model = PostCommentModel
    template_name = "posts/deletecomment.html"
    pk_url_kwarg = "pk"
    success_url = reverse_lazy("home")


class PostDetailsView(DetailView):
    model = PostModel
    template_name = "posts/postdetails.html"
    pk_url_kwarg = "pk"
    context_object_name = "posts"

    def post(self, request, *args, **kwargs):
        comment_form = CommentForm(data=self.request.POST)
        post = self.get_object()
        if comment_form.is_valid():
            new_comment = comment_form.save(commit=False)
            new_comment.post = post
            new_comment.save()
        return self.get(request, *args, **kwargs)

    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        post = self.object
        comments = post.comments.all()

        comments_form = CommentForm()
        context["comments"] = comments
        context["comment_form"] = comments_form
        return context
