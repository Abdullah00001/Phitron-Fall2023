from django.shortcuts import render

d = {
    "users_data": [
        {
            "name": "John Doe",
            "email": "johndoe@example.com",
            "age": 8,
            "address": {
                "street": "123 Main St",
                "city": "Anytown",
                "state": "Anystate",
                "zip_code": "12345"
            },
            "phone_number": "555-1234",
            "hobbies": ["reading", "hiking", "coding"]
        },
        {
            "name": "Jane Smith",
            "email": "janesmith@example.com",
            "age": 34,
            "address": {
                "street": "456 Oak St",
                "city": "Othertown",
                "state": "Otherstate",
                "zip_code": "67890"
            },
            "phone_number": "",
            "hobbies": ["painting", "traveling", "baking"]
        },
        {
            "name": "Emily Johnson",
            "email": "emilyjohnson@example.com",
            "age": 22,
            "address": {
                "street": "789 Pine St",
                "city": "Sometown",
                "state": "Somestate",
                "zip_code": "11223"
            },
            "phone_number": "555-5678",
            "hobbies": ["photography", "cycling", "swimming"]
        },
        {
            "name": "Michael Brown",
            "email": "michaelbrown@example.com",
            "age": 45,
            "address": {
                "street": "101 Maple St",
                "city": "Anycity",
                "state": "Anystate",
                "zip_code": "44556"
            },
            "phone_number": "555-8765",
            "hobbies": ["fishing", "gardening", "chess"]
        },
        {
            "name": "Laura Wilson",
            "email": "laurawilson@example.com",
            "age": 30,
            "address": {
                "street": "202 Birch St",
                "city": "Everytown",
                "state": "Everystate",
                "zip_code": "77889"
            },
            "phone_number": "",
            "hobbies": ["running", "knitting", "writing"]
        }
    ]
}



def homePage(req):
    return render(req, "index.html",d)
