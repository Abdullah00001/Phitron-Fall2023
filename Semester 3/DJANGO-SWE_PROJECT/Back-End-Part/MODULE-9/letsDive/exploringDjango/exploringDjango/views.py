from django.http import HttpResponse

def homePage(res):
    return HttpResponse("This Is Home Page")

def contactPage(req):
    return HttpResponse("This is the contact page")
