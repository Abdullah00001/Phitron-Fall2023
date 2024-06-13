from django.contrib import admin
from category.models import CategoryModel

# Register your models here.


class CategoryAdmin(admin.ModelAdmin):
    prepopulated_fields = {"slug": ("category_name",)}
    list_display = ["category_name", "slug"]


admin.site.register(CategoryModel, CategoryAdmin)
