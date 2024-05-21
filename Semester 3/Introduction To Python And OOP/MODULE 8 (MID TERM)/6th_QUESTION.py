"""=======================QUESTION==================

Make a method in Hall class named view_available_seats() 
which will take an id of show, and view the seats that are available in that show

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
        twoD = [[0 for _ in range(self.cols)] for _ in range(self.rows)]
        self.seats[id] = twoD

    def book_seats(self, id, seatInfo):
        seat = self.seats.get(id)
        if seat is None:
            print(f"{id} not find")

        for row, col in seatInfo:
            if 0 <= row <= self.rows and 0 <= col <= self.cols:
                if seat[row][col] == 0:
                    seat[row][col] = 1
                    print(f"seat booked successful")
                else:
                    print(f"seat is already booked")
            else:
                print(f"invalid seat position")

    def view_show_list(self):
        for showInfo in self.show_list:
            (movieName, movieID, time) = showInfo
            print(f"name: {movieName} id: {movieID} time : {time}")

    def view_available_seats(self, id):
        seat = self.seats.get(id)
        if seat is None:
            print(f"{id} not find")
        else:
            for row in range(self.rows):
                for col in range(self.cols):
                    if seat[row][col] == 0:
                        print(f"Avaiable Seat IN Row{row} Coloum {col}")


class Star_Cinema(Hall):
    hall_list = []

    def __init__(self, rows, cols, hall_no):
        super().__init__(rows, cols, hall_no)

    def entry_hall(self):
        hallInfo = Hall(self.rows, self.cols, self.hall_no)
        self.hall_list.append(hallInfo)


# ====================ANSWER==================
