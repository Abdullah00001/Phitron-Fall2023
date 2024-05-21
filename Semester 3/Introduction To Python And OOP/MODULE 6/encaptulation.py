class Bank:
    def __init__(self, userAccNo, userName, userId, useBalance):
        self.__userAccNo = userAccNo
        self.__userName = userName
        self.__userId = userId
        self.__userBalance = useBalance

    def Balance(self):
        print(f"your balance is {self.__userBalance}")

    def Deposite(self, ammount):
        self.__userBalance += ammount
        print(f"your balance is {self.__userBalance}")


user1 = Bank(14579023, "Abdullah", 2345, 50000)

user1.Balance()
user1.Deposite(5000)
