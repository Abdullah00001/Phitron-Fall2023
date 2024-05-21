"""=======================QUESTION==================

Make a method in Hall class named entry_show() which will take id, movie_name and time in string format. Make a tuple with all of the information and append it to the show_list attribute. Allocate seats with rows and cols using 2d list, initially all seats will be free. Make a key with id to the attribute seats and value will be the 2d list.

=============================QUESTION====================="""

# =======================ANSWER=================


class Hall:
    def __init__(self, rows, cols, hall_no):
        self.seats = {}
        self.show_list = []
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no

    def entry_show(self, id, movie_name, time):
        showsInfo = (id, movie_name, time)
        self.show_list.append(showsInfo)
        twoD=[[0 for _ in range(self.cols)] for _ in range(self.rows)]
        self.seats[id]=twoD


class Star_Cinema(Hall):
    hall_list = []

    def __init__(self, rows, cols, hall_no):
        super().__init__(rows, cols, hall_no)

    def entry_hall(self):
        hallInfo = Hall(self.rows, self.cols, self.hall_no)
        self.hall_list.append(hallInfo)


# ====================ANSWER==================
