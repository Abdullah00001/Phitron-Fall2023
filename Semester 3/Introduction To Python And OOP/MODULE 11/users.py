from abc import ABC, abstractmethod


class User(ABC):
    def __init__(self, name, email, nid) -> None:
        self.name = name
        self.email = email
        self.nid = nid
        self.wallet = 0
        super().__init__()

    @abstractmethod
    def display_profile(self):
        raise NotImplementedError


class Rider(User):
    def __init__(self, name, email, nid,current_location,initial_amount):
        self.current_Ride=None
        self.current_location=current_location
        self.wallet=initial_amount
        super().__init__(name, email, nid)
    
    def display_profile(self):
        print(f"Rider : {self.name}\nEmail : {self.email}\nBalance : {self.wallet}")
        return super().display_profile()
    
    def load_cash(self, amount):
        if amount>0:
            self.wallet+=amount
    
    def update_location(self, current_location):
        self.current_location=current_location
    
    def request_ride(self, ride_sharing, destination):
        pass
    
    def show_current_ride(self):
        print(self.current_Ride)

class Driver(User):
    def __init__(self, name, email, nid,current_location) -> None:
        self.current_location=current_location
        self.wallet=0
        super().__init__(name, email, nid)
    
    def display_profile(self):
        print(f"Driver : {self.name}\nEmail : {self.email}\nBalance : {self.wallet}")
        return super().display_profile()
    
    def accept_ride(self, ride):
        pass
