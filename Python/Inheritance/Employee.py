class Employee:
    def __init__(self, id, salary):
        self.id = id
        self.salary = salary

    def display(self):
        print(self.id, self.salary)

class SalesEmployee(Employee):
    def __init__(self, id, salary, sales):
        super().__init__(id, salary)   
        self.sales = sales

    def display(self):
        print(self.id, self.salary, self.sales)

e = Employee(14, 30000)
se = SalesEmployee(14, 30000, 20)
e.display()
se.display()