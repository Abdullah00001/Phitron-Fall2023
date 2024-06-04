from django import forms
from ADD_CATEGORY.models import CategoryModel


class CategoryForm(forms.ModelForm):
    class Meta:
        model = CategoryModel
        fields = "__all__"

        labels = {
            "categoryName": "Category Name",
        }

        widgets = {
            "categoryName": forms.TextInput(
                attrs={"placeholder": "Type Category Name"}
            ),
        }
