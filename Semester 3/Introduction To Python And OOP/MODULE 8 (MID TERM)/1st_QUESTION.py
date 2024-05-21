""" ======================QUESTION===============================================
Make a class named Star_Cinema which will have one class attribute named hall_list 
which is an empty list initially. Make a method named entry_hall() to insert an object 
of class Hall (Described below) inside its hall_list.

 ======================QUESTION==============================================="""

# ====================ANSWER======================
class Hall:
    def __init__(self, hallName, hallCapacity):
        self.hallName = hallName
        self.hallCapacity = hallCapacity


class Star_Cinema:
    hall_list = []

    def __init__(self) -> None:
        pass

    def entry_hall(self, hallInfo):
        self.hall_list.append(hallInfo)

    def view(self):
        for hallInfo in self.hall_list:
            print(
                f"Hall Name: {hallInfo.hallName}\nHall Capacity: {hallInfo.hallCapacity}"
            )


cinema1 = Star_Cinema()
hallInfo = Hall("moyna hall", 120)
cinema1.entry_hall(hallInfo)

cinema1.view()

# ====================ANSWER======================


""" class Hall:
    def __init__(self, hallName, hallCapacity):
        self.hallName = hallName
        self.hallCapacity = hallCapacity

class Star_Cinema(Hall):
    hall_list = []
    def __init__(self, hallName, hallCapacity):
        super().__init__(hallName, hallCapacity)
    
    def entry_hall(self):
        hallInfo=Hall(self.hallName,self.hallCapacity)
        self.hall_list.append(hallInfo)
    def view(self):
        for hallInfo in self.hall_list:
            print(f"Hall Name: {hallInfo.hallName}\nHall Capacity: {hallInfo.hallCapacity}") 


cinema1 = Star_Cinema("moyna hall", 120)

cinema1.entry_hall()

cinema1.view() """
