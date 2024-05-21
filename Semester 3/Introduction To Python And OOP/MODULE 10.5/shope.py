from user import Seller
from user import Buyer

class Shop:
    def __init__(self):
        self.sellers = {}
        self.buyers = {}
    
    def buyerValid(self, email, password):
        if email in self.buyers:
            if self.buyers[email].validation(password):
                print(f"Login Successful")
                return True
            else:
                print(f"Incorrect Password")
                return False
        else:
            print(f"Sorry User {email} NOt Exist.\nPlease Sign Up")
            return False

    def sellerValid(self, email, password):
        if email in self.sellers:
            if self.sellers[email].validation(password):
                print(f"Login Successful")
                return True
            else:
                print(f"Incoreect Password")
                return False
        else:
            print(f"Sorry User {email} NOt Exist.\nPlease Sign Up")
            return False

    def addSeller(self, name, email, password, shopID):
        if email in self.sellers:
            print(f"Sorry Name:{name} Email : {email} Already Exist")
        else:
            client = Seller(name, email, password, shopID)
            self.sellers[email] = client
            print(f"Congratulation Sign Up Complete\n")

    def addBuyer(self, name, email, password, balance):
        if email in self.buyers:
            print(f"Sorry Name:{name} Email : {email} Already Exist")
        else:
            client = Buyer(name, email, password, balance)
            self.buyers[email] = client
            print(f"Congratulation Sign Up Complete\n")

        