class Dog:
    species = "Canine"  # Class attribute

    def __init__(self, name, age):
        self.name = name      # Instance attribute
        self.age = age       # Instance attribute

dog1 = Dog("Buddy", 3)       # Create an instance of Dog
dog2 = Dog("Charlie", 5)     # Create another instance of Dog

# Access class and instance variables
print(dog1.species) # (Class variable)
print(dog1.name) # (Instance variable)
print(dog2.name) # (Instance variable)
# Modify instance variables
dog1.name = "Max"
print(dog1.name)     # (Updated instance variable)
# Modify class variable
Dog.species = "Feline"
print(dog1.species)  # (Updated class variable)
print(dog2.species)

