class creature:
    def __init__(self,eyes,nose,lag,ear,mouth):
        self.eyes=eyes
        self.nose=nose
        self.lag=lag
        self.ear=ear
        self.mouth=mouth
    def move(self):
        print(f"move with {self.lag} lag")

class human(creature):
    def __init__(self, eyes, nose, lag, ear, mouth,hand):
        self.hand=hand
        super().__init__(eyes, nose, lag, ear, mouth)
    def cook(self):
        print(f"hume can cook their food with the help of their {self.hand} hands")


abdullah=human(2,1,2,2,'mouth',2)

abdullah.cook()
abdullah.move()