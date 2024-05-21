balance=3000

def store(item,price):
    last=balance-price
    return f'item name: {item} price: {price} remaining: {last}'

status=store('sunglass',1000)

print(status)