from django.contrib import admin
from doctor.models import Specialization, Designation, AvailableTime, Doctor, Review

# Register your models here.


class SpecializationAdmin(admin.ModelAdmin):
    prepopulated_fields = {"slug": ("name",)}


class DesignationAdmin(admin.ModelAdmin):
    prepopulated_fields = {"slug": ("name",)}


admin.site.register(Specialization, SpecializationAdmin)
admin.site.register(Designation, DesignationAdmin)
admin.site.register(AvailableTime)
admin.site.register(Doctor)
admin.site.register(Review)
