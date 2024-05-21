class Product:
    def __init__(self, productName, productPrice, productQuant):
        self.productName = productName
        self.productPrice = productPrice
        self.productQuant = productQuant


class Shop:
    def __init__(self, shopName, customerName):
        self.shopName = shopName
        self.customerName = customerName
        self.products = []

    def addProduct(self, productName, productPrice, productQuant):
        productInfo = Product(productName, productPrice, productQuant)
        self.products.append(productInfo)

    def buyProduct(self, productName, quantity):
        for product in self.products:
            if product.productName == productName:
                if product.productQuant != 0 and quantity <= product.productQuant:

                    product.productQuant -= quantity
                    return f"{productName} Buy Successfull"
                else:
                    return f"sorry product is out of stock"
            else:
                return f"sorry product is out of stock"


shop = Shop("Ryans", "Abdullah")
shop.addProduct("4090 ti extream", 250000, 2)

print(shop.buyProduct("4090 ti extream",1))
