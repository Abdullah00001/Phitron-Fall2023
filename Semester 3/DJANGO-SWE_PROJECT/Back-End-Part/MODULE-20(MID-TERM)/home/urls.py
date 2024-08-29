from django.urls import path, include
from home.views import HomePageView


urlpatterns = [
    path("", HomePageView.as_view(), name="home"),
    path("brand/<slug:slug>/", HomePageView.as_view(), name="slugfield"),
    path("account/", include("account.urls")),
    path("car-brand/", include("carbrand.urls")),
    path("car-info/", include("carinfo.urls")),
    path("payment/", include("payment.urls")),
]
