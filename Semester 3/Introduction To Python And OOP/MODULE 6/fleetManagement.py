class vheical:
    def __init__(self,name,engineType,cylinderType,milage,wheels):
        self.name=name
        self.engineType=engineType
        self.cylinderType=cylinderType
        self.milage=milage
        self.wheels=wheels

class truck(vheical):
    def __init__(self,load,size,typeOfContainer,name,engineType,cylinderType,milage,wheels):
        self.load=load
        self.size=size
        self.typeOfContainer=typeOfContainer
        super().__init__(name,engineType,cylinderType,milage,wheels)

cargoTruck=truck(500,'largeSize','cargoSemi','Man','v8','Hydraulic cylinder','3.5kmpl',12)

print(cargoTruck.name)