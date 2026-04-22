# Base class
class Animal:
    pass
# Derived classes
class Dog(Animal):
    pass
class Cat(Animal):
    pass
dog = Dog()
cat = Cat()
print(isinstance(dog, Dog)) 
print(isinstance(dog, Animal)) 
print(isinstance(cat, Cat)) 
print(isinstance(cat, Dog)) 
print(issubclass(Dog, Animal)) 
print(issubclass(Cat, Animal)) 
print(issubclass(Dog, Cat)) 