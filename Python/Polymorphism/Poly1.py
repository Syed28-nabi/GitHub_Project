class Calculator:
    def add(self, *args):
        return sum(args)
calc = Calculator()
print(calc.add())
print(calc.add(6))
# print(calc.add(5, 10)) # Two arguments
# print(calc.add(5, 10, 15)) # Three arguments
# print(calc.add(1, 2, 3, 4)) # Any number of arguments