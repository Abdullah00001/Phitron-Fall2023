from user import Admin, Employee, Customer
from orders import Order
from restaurent import Restaurent
from menu import Menu
from fooditem import FoodItem

Baper_Hotel = Restaurent("Baper_Hotel")


def customerMenu():
    customerName = input("Enter Your Name : ")
    customerPhhone = int(input("Enter Your Phone Number : "))
    customerEmail = input("Enter Your Email : ")
    customerAddress = input("Enter Your Address : ")
    customer = Customer(
        name=customerName,
        phone=customerPhhone,
        email=customerEmail,
        address=customerAddress,
    )

    while True:
        print(f"WellCome {customerName}")

        print(
            f"Option 1 : View Menu\nOption 2 : Add To Cart\nOption 3 : View Cart\nOption 4 : Pay Bill\nOption 5 : Exit"
        )
        Option = int(input())

        if Option == 1:
            customer.viewMenu(Baper_Hotel)
        elif Option == 2:
            print(f"Enter Your Choosing Product Name And Quantity")
            productName = input()
            productQuantity = int(input())
            customer.addToCart(Baper_Hotel, productName, productQuantity)
        elif Option == 3:
            customer.viewCart()
        elif Option == 4:
            customer.payBill()
        elif Option == 5:
            break
        else:
            print("Invalid InPut")


def adminMenu():
    adminName = input("Enter Your Name : ")
    adminPhhone = int(input("Enter Your Phone Number : "))
    adminEmail = input("Enter Your Email : ")
    adminAddress = input("Enter Your Address : ")
    admin = Admin(
        name=adminName,
        phone=adminPhhone,
        email=adminEmail,
        address=adminAddress,
    )

    while True:
        print(f"WellCome {adminName}")

        print(
            f"Option 1 : Add Employee\nOption 2 : View Employee List\nOption 3 : Add Item\nOption 4 : Remove Item\nOption 5 : View Menu\nOption 6 : Exit"
        )
        Option = int(input())

        if Option == 1:
            print(
                f"To Add An Employee Enter These \n1)Name \n2)Phone \n3)Email \n4) Address \n5)Age \n6)Designation \n7)Salary"
            )
            emp = Employee(
                input("Name : "),
                int(input("Phone : ")),
                input("Email : "),
                input("Address : "),
                int(input("Age : ")),
                input("Designation : "),
                int(input("Salary : ")),
            )
            admin.addEmployee(Baper_Hotel, emp)
        elif Option == 2:
            admin.viewEmployees(Baper_Hotel)
        elif Option == 3:
            print(f"To Add Item Enter 1) Item Name 2)Item Price 3)Item Quantity")
            item = FoodItem(input(), int(input()), int(input()))
            admin.addNewItem(Baper_Hotel, item)
        elif Option == 4:
            print(f"To Remove Item Please Insert The Item Name")
            admin.remove_item(Baper_Hotel, input())
        elif Option == 5:
            admin.viewMenu(Baper_Hotel)
        elif Option == 6:
            break
        else:
            print("Invalid InPut")


while True:
    print(f"Wellcome To {Baper_Hotel.name}")
    print(f"Choose And Option")
    print(f"Option 1 : Admin\nOption 2 : Customer\nOption 3 : Exit")
    option = int(input())
    if option == 1:
        adminMenu()
    elif option == 2:
        customerMenu()
    elif option == 3:
        break
    else:
        print("Invalid Input")
