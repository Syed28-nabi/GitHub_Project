# Single Inheritance
class Dog:
    def __init__(self, name):
        self.name = name
    def displayName(self):
        print(f"Dog's Name: {self.name}")
class Labrador(Dog): # Single Inheritance
    def sound(self):
        print("Labrador woofs")
class GuideDog(Labrador): # Multilevel Inheritance
    def guide(self):
        print(f"{self.name} Guides the way!")
# Example Usage
guideDog = GuideDog("Max")
guideDog.displayName()
guideDog.guide()
