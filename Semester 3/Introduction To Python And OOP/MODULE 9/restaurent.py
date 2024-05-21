from menu import Menu
class Restaurent:
    def __init__(self,name):
        self.name=name
        self.Employees = []
        self.foodMenu=Menu()
    def addEmp(self,emp):
        self.Employees.append(emp)
        print(f"{emp.name} Added As A {emp.designation}")
    
    def viewEmp(self):
        for employee in self.Employees:
            print("\tEmployee List")
            print(f"Name\tEmail\tDesignation")
            print(f"{employee.name}\t{employee.email}\t{employee.designation}")