from django.http import HttpResponse

def homePage(req):
    return HttpResponse("This Is Home Page")