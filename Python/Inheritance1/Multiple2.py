# Base class 1
class Flyable:
    def fly(self):
        return "This object can fly."
# Base class 2
class Swimmable:
    def swim(self):
        return "This object can swim."
# Derived class inheriting from both Flyable and Swimmable
class Duck(Flyable, Swimmable):
    def quack(self):
        return "Duck quacks."
    
# Creating an instance of Duck
duck = Duck()
# Calling methods from both base classes and its own method
print(duck.fly()) 
print(duck.swim())
print(duck.quack())