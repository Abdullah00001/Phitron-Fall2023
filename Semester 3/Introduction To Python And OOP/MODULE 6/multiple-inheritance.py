class creature:
    def __init__(self, eyes, nose, lag, ear, mouth):
        self.eyes = eyes
        self.nose = nose
        self.lag = lag
        self.ear = ear
        self.mouth = mouth

    def move(self):
        print(f"move with {self.lag} lag")


class dog(creature):
    def __init__(self, eyes, nose, lag, ear, mouth, tail):
        self.tain = tail
        super().__init__(eyes, nose, lag, ear, mouth)

    def smell(self):
        print(f"identify or memorized with smell")


class tiger(dog):
    def __init__(self, eyes, nose, lag, ear, mouth, tail, livies):
        self.livies = livies
        super().__init__(eyes, nose, lag, ear, mouth, tail)

    def food(self):
        print(f"titagers main food is rabits meets")


class lion(dog,tiger):
    def __init__(self, eyes, nose, lag, ear, mouth, tail,livies):
        tiger.__init__(self,livies)
        super().__init__(eyes, nose, lag, ear, mouth, tail)

hewhe=lion(2,1,4,2,1,"yes","junggel")

hewhe.food()