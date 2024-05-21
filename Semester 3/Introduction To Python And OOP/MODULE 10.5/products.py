class Product:
    def __init__(self, itemName, itemPrice, itemQuant):
        self.itemName = itemName
        self.itemPrice = itemPrice
        self.itemQuant = itemQuant


class Products:
    def __init__(self):
        self.product_List = []

    def add_Product(self, product):
        self.product_List.append(product)
        print(f"Product {product.itemName} Added Succesfull")

    def remove_Product(self, productName):
        for product in self.product_List:
            if productName == product.itemName:
                self.product_List.remove(product)
                print(f"Product {product.itemName} Removed Succesfull")
            else:
                print(f"Product {product.itemName} Not Found")

    def view_Product(self):
        for product in self.product_List:
            print(f"Product Name\tProduct Price\tProduct Quantity")
            print(f"{product.itemName}\t{product.itemPrice}\t{product.itemQuant}")