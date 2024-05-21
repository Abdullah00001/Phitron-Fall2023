from abc import ABC, abstractmethod


class Animal(ABC):
    def __init__(self, eyes, nose, ear, leg, height, weight, mouth):
        self.eyes = eyes
        self.nose = nose
        self.ear = ear
        self.leg = leg
        self.height = height
        self.weight = weight
        self.mouth = mouth

    def eat(self):
        print(f"take food using {self.mouth}")

    @abstractmethod
    def move(self):
        pass


class Elephant(Animal):
    def __init__(self, eyes, nose, ear, leg, height, weight, mouth, tail):
        self.tail = tail
        super().__init__(eyes, nose, ear, leg, height, weight, mouth)
    def move(self):
        print(f"move using {self.leg}")

hati = Elephant(2, 1, 2, 4, "40fit", "120ton", "mouth", "yes")

hati.eat()
hati.move()
