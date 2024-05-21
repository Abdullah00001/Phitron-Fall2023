""" Polymorphism """
class Shape:
    def __init__(self):
        pass

    def area(self):
        pass


class Squar(Shape):
    def __init__(self, height, width):
        self.height = height
        self.width = width
        super().__init__()

    def area(self):
        print(self.height * self.width)


class Triangle(Squar):
    def __init__(self, height, width):
        super().__init__(height, width)

    def area(self):
        print(int(0.5 * self.height * self.width))


class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius
        super().__init__()

    def area(self):
        print(int(3.1416 * self.radius * self.radius))


borgo = Squar(40, 40)
trivuj = Triangle(30, 10)
britto = Circle(40)
borgo.area()
trivuj.area()
britto.area()
