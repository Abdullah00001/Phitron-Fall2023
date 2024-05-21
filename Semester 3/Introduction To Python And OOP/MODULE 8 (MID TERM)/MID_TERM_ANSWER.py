""" ========================================================================
                           ALL ANSWER IN ONE FILE
==========================================================================="""
class Star_Cinema:
    hall_list = []

    def entry_hall(self, hall_obj):
        self.hall_list.append(hall_obj)


class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no):
        self._seats = {}
        self._show_list = []
        self.rows = rows
        self.cols = cols
        self.__hall_no = hall_no
        self.entry_hall(self)

    def entry_show(self, id, movie_name, time):
        self._show_list.append((id, movie_name, time))
        self._seats[id] = [[0 for _ in range(self.cols)] for _ in range(self.rows)]

    def book_seats(self, movie_id, seatInfo):
        if movie_id in self._seats:
            row, col = seatInfo
            if 0 <= row <= self.rows and 0 <= col and col <= self.cols:
                if self._seats[movie_id][row][col] == 0:
                    self._seats[movie_id][row][col] = 1
                    print(f"Congratulation! seat[{row}][{col}] Booked Successful")
                else:
                    print(f"Sorry! Seat Is Already Booked\nTry Another\/thank You")
            else:
                print(f"invalid Seat[{row}][{col}] Position\nPlease Enter Valid One")
        else:
            print(f"Sorry Your Enterd Id-{movie_id} Is Not Exist")

    def view_show_list(self):
        for show in self._show_list:
            (movieId, movieName, streamingTime) = show
            print(
                f"Running Movie Information\nMovie Name: {movieName}\nShedule: {streamingTime}\nMovie Id: {movieId}"
            )

    def view_available_seats(self, id):
        if id in self._seats:
            for row in range(self.rows):
                for col in range(self.cols):
                    if self._seats[id][row][col] == 0:
                        print(f"Avaiable Seat[{row}][{col}]")
        else:
            print(f"Sorry Your Enterd ID:{id} Is Not Found")


print(
    f"======================================\n\t  WELCOME TO NETFLIX\n======================================\n"
)


new_hall = Hall(10, 6, 1)
new_hall = Hall(5, 6, 2)
new_hall = Hall(6, 6, 3)
new_hall = Hall(10, 10, 4)
new_hall.entry_show(12, "R-one", "sun-10am")
new_hall.entry_show(13, "Spider Man no way Home", "sat-8am")
new_hall.entry_show(14, "Avenger Infinity War", "mon-4pm")
new_hall.entry_show(8, "Iron Man", "friday-8pm")
print(f"Please Choose An Option")
print(
    f"\tOPTION 0: VIEW SHOW LIST\n\tOPTION 1: AVAILABLE SEATS\n\tOPTION 2: BOOK A SEAT\n\tOPTION 3: EXIT"
)
while True:
    option = int(input())

    if option == 0:
        new_hall.view_show_list()
    elif option == 1:
        print(f"Please Insert Movie Id For Available Seat")
        movie_ID = int(input())
        new_hall.view_available_seats(movie_ID)
    elif option == 2:
        print("Please Insert 1.Movie Id 2.Seat Row 3.Seat Coloumn")
        id = int(input())
        seatRow = int(input())
        seatColoumn = int(input())
        new_hall.book_seats(id, (seatRow, seatColoumn))
    elif option == 3:
        print(f"Thanks For Browse")
        break
