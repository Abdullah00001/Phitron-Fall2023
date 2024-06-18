from django.shortcuts import render
from carinfo.models import CarDetailModel
from django.views.generic import DetailView
from comment.forms import CommentForm

# Create your views here.


class PostDetailsPageView(DetailView):
    model = CarDetailModel
    template_name = "carinfo/cardetails.html"
    pk_url_kwarg = "pk"
    context_object_name = "cardetail"

    def post(self, request, *args, **kwargs):
        comment_form = CommentForm(data=self.request.POST)
        post = self.get_object()
        if comment_form.is_valid():
            new_comment = comment_form.save(commit=False)
            new_comment.car_post = post
            new_comment.save()
        return self.get(request, *args, **kwargs)

    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        carpost = self.object
        cmnts = carpost.cmnt.all()
        context["comments"] = cmnts
        context["comment_form"] = CommentForm()
        return context
