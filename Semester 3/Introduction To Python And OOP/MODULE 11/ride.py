from datetime import datetime


class Ride:
    def __init__(self, start_location, end_location):
        self.start_location = start_location
        self.end_location = end_location
        self.driver = None
        self.rider = None
        self.start_Time = None
        self.end_Time = None
        self.estimated_Fare = None

    def set_Driver(self, driver):
        self.driver = driver

    def start_Ride(self):
        self.start_Time = datetime.now

    def end_Ride(self):
        self.rider.wallet -= self.estimated_Fare
        self.driver.wallet += self.estimated_Fare
        self.end_Time = datetime.now

    def __repr__(self) -> str:
        print(
            f"Start Point: {self.start_location} \t End Point: {self.end_location}\nStart Time: {self.start_Time}\tEnd Time: {self.end_Time}\nFare: {self.estimated_Fare}"
        )


class Ride_Request:
    def __init__(self, rider, end_location):
        self.rider=rider
        self.end_location=end_location
        
class Ride_Matching:
    def __init__(self, drivers):
        self.available_Drivers=drivers

    def find_driver(self, ride_Request):
        pass