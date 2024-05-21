"""=======================QUESTION==================

Make a class named Hall which will have 5 instance attributes given below	
seats which is an dictionary of seats information
show_list which is an list of tuples
rows which is the row of the seats in that hall
cols which is the column of the seats in that hall
hall_no which is the unique no. of that hall
Initialize an object of class Hall with rows, cols and hall_no. And insert that object to the Star_Cinema class attribute named hall_list inside the initializer using inheritance. seats and show_list will be empty initially.

=============================QUESTION========================"""

#=======================ANSWER=================


class Hall:
    def __init__(self, rows, cols, hall_no):
        self.seats = {}
        self.show_list = []
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no


class Star_Cinema(Hall):
    hall_list = []

    def __init__(self, rows, cols, hall_no):
        super().__init__(rows, cols, hall_no)

    def entry_hall(self):
        hallInfo = Hall(self.rows, self.cols, self.hall_no)
        self.hall_list.append(hallInfo)
    
    def view(self):
        for hallInfo in self.hall_list:
            print(f"{hallInfo.rows}")
        
cinema=Star_Cinema(8,8,101)
cinema.entry_hall()
cinema.view()


# ====================ANSWER==================
