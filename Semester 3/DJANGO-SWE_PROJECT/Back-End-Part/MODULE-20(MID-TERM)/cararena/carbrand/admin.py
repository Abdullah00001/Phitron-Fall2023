from django.contrib import admin
from carbrand.models import CarBrandModel


# Register your models here.
class BrandAdmin(admin.ModelAdmin):
    prepopulated_fields = {"slug": ("brand_name",)}
    list_display = ["brand_name", "slug"]


admin.site.register(CarBrandModel, BrandAdmin)
