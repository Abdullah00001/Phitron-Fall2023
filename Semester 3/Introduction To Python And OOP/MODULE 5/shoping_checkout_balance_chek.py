class Splash:
    Address = "Jamuna Future Park"

    def __init__(self, userName):
        self.userName = userName
        self.userCart = []

    def addToCart(self, itemName, itemPrice, itemQuantity):
        productInfo = {
            "productName": itemName,
            "productPrice": itemPrice,
            "productQuantity": itemQuantity,
        }
        self.userCart.append(productInfo)

    def viewCart(self):
        cartInfo = ""
        for item in self.userCart:
            cartInfo += f"PRODUCT NAME: {item['productName']} | QUANTITY: {item['productQuantity']} | UNIT PRICE: {item['productPrice']}\n"
        return cartInfo

    def removeToCart(self, itemName):
        for item in self.userCart:
            if item["productName"] == itemName:
                self.userCart.remove(item)
        return f"{itemName} Remove Successful"

    def checkOut(self, amount):
        total = 0
        for item in self.userCart:
            total += item["productQuantity"] * item["productPrice"]
        if total < amount:
            return f"Your Total Bill Is \nProvided Amount {amount}\n- Sub-Total {total}\nChange {amount-total}"
        elif total == amount:
            return f"Your Total Bill Is \nProvided Amount {amount}\n- Sub-Total {total}\nChange {amount-total}"
        else:
            return f"Sorry You Have To Pay More {total-amount}"


userOne = Splash("abdullah")

userOne.addToCart("pant", 1140, 2)
userOne.addToCart("shirt", 780, 1)
userOne.addToCart("t-shirt", 665, 2)
userOne.addToCart("jacket", 2140, 1)

print(userOne.viewCart())
print(userOne.removeToCart("t-shirt"))
print(userOne.viewCart())
print(userOne.checkOut(8000))
