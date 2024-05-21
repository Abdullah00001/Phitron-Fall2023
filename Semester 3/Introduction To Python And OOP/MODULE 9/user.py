from abc import ABC
from orders import Order
from restaurent import Restaurent


class User(ABC):
    def __init__(self, name, phone, email, address):
        self.name = name
        self.phone = phone
        self.email = email
        self.address = address
        super().__init__()


class Employee(User):
    def __init__(self, name, phone, email, address, age, designation, salary):
        self.age = age
        self.designation = designation
        self.salary = salary
        super().__init__(name, phone, email, address)


class Admin(User):
    def __init__(self, name, phone, email, address):

        super().__init__(name, phone, email, address)

    def addEmployee(self, restaurent, emp):
        restaurent.addEmp(emp)

    def viewEmployees(self, restaurent):
        restaurent.viewEmp()

    def addNewItem(self, restaurent, item):
        restaurent.foodMenu.addItem(item)

    def remove_item(self, restaurent, itemname):
        restaurent.foodMenu.removeItem(itemname)

    def viewMenu(self, restaurent):
        restaurent.foodMenu.showMenu()


class Customer(User):
    def __init__(self, name, phone, email, address):
        self.customerOrder = Order()
        super().__init__(name, phone, email, address)

    def viewMenu(self, restaurent):
        restaurent.foodMenu.showMenu()

    def addToCart(self, restaurent, itemName, itemQuantity):
        item = restaurent.foodMenu.findItem(itemName)
        if item:
            if itemQuantity > item.quantity:
                print("Quantity Exceed")
            else:
                item.quantity = itemQuantity
                self.customerOrder.add_to_Cart(item)
                print(f"Item {itemName} Added To Cart")
        else:
            print(f"Sorry {itemName} Not Found!")

    def viewCart(self):
        print(f"\tYour Cart")
        print(f"Item-Name\tPrice\tQuantity")
        for item, quantity in self.customerOrder.Cart.items():
            print(f"{item.name}\t{item.price}\t{quantity}")
        print(f"Total price : {self.customerOrder.total_Price}")

    def payBill(self):
        print(f"Total {self.customerOrder.total_Price} Paid Successfully")
        self.customerOrder.clearCart()
