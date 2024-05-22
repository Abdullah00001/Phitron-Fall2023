from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def appHome(req):
    d = {
    "people_data": [
        {
            "name": "Alice Johnson",
            "age": 17,
            "living_city": "New York"
        },
        {
            "name": "Michael Smith",
            "age": 35,
            "living_city": "Los Angeles"
        },
        {
            "name": "Emily Davis",
            "age": 22,
            "living_city": "Chicago"
        }
    ]
}




    return render(req,'contextapp/home.html',d)