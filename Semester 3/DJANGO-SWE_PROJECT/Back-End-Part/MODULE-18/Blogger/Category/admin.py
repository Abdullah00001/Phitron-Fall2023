from django.contrib import admin
from Category.models import CategoryModel


# Register your models here.
class CategoryAdmin(admin.ModelAdmin):
    prepopulated_fields = {"nameSlug": ("name",)}
    list_display = ["name", "nameSlug"]


admin.site.register(CategoryModel, CategoryAdmin)
