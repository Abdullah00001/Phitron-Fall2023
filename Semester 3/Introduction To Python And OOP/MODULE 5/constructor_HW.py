class Pen:
    Manufacturur = 'China'
    Region = 'Bangladesh'
    Address = 'Khilkhet,Dhaka-North 1222'
    def __init__(self,brandName,bodyColor,Color,Price):
        self.brandName = brandName
        self.bodyColor = bodyColor
        self.Color = Color
        self.Price=Price


he = Pen(input(),input(),input(),int(input()))

she = Pen(input(),input(),input(),int(input()))

her = Pen(input(),input(),input(),int(input()))

print(f"\n\nBrand : {he.brandName}\nBody: {he.bodyColor}\nColor: {he.Color}\nPrice: {he.Price}")
