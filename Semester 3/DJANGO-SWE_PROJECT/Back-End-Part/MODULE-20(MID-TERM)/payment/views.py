from django.shortcuts import render, redirect
from payment.models import PaymentModel
from carinfo.models import CarDetailModel
from payment.forms import PaymentForm
from django.contrib import messages
from django.contrib.auth.decorators import login_required
# Create your views here.

@login_required
def payment(request, id):
    item = CarDetailModel.objects.get(pk=id)

    if request.method == "POST":
        form = PaymentForm(request.POST)
        if form.is_valid():
            quantity = form.cleaned_data["quantity"]

            if item.car_quantity > quantity:
                item.car_quantity -= quantity
                item.save()

                history = PaymentModel.objects.create(
                    car_model=item,
                    user=request.user,
                    net_quantity=quantity,
                    total_price=item.car_price * quantity,
                )
                messages.success(
                    request,
                    "Payment Succesful.You will receive your product withiin 2 days.",
                )
                return redirect("detail", pk=item.pk)
            else:
                messages.error(request, "Insufficient quantity")
        else:
            messages.error(request, "Please Type Interger Or Number")
    else:
        form = PaymentForm()
    return render(request, "payment/buynow.html", {"form": form})
