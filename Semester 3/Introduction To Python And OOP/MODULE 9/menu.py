class Menu:
    def __init__(self):
        self.items = []

    def addItem(self, item):
        self.items.append(item)
        print(f"{item.name} Added Succesfull")

    def findItem(self, itemName):
        for item in self.items:
            if itemName == item.name:
                return item

    def removeItem(self, itemName):
        item=self.findItem(itemName)
        if item:
            self.items.remove(item)
            print(f"{itemName} Removed")
        else:
            print(f"Item Not Found")

    def showMenu(self):
        print(f"\tMenu")
        for item in self.items:
            print(f"Item-Name\tPrice\tQuantity")
            print(f"{item.name}\t{item.price}\t{item.quantity}")
