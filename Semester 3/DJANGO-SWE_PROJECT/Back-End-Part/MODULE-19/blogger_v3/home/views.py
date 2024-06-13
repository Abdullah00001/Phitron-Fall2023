from typing import Any
from django.db.models.query import QuerySet
from django.views.generic import ListView
from posts.models import PostModel
from category.models import CategoryModel

# Create your views here.


class HomePageView(ListView):
    model = PostModel
    template_name = "home/index.html"

    """ def get_context_data(self, **kwargs):
        slug = self.kwargs.get("slug", None)
        context = super().get_context_data(**kwargs)
        if slug is not None:
            context["categories"] = CategoryModel.objects.filter(slug=slug)
        else:
            context["categories"] = CategoryModel.objects.all()
        context["posts"] = PostModel.objects.all()

        return context """

    def get_context_data(self, **kwargs):
        slug = self.kwargs.get("slug", None)
        context = super().get_context_data(**kwargs)
        if slug is not None:
            catg = CategoryModel.objects.get(slug=slug)
            print(catg)
            context["posts"] = PostModel.objects.filter(post_category=catg)
            context["categories"] = CategoryModel.objects.all()
            return context
        else:
            context["categories"] = CategoryModel.objects.all()
        context["posts"] = PostModel.objects.all()

        return context


""" def homePage(request):
    return render(request, "home/index.html") """
