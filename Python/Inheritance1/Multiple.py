class Dog:
    def __init__(self, name):
        self.name = name
    def displayName(self):
        print(f"Dog's Name: {self.name}")
class Friendly:
    def greet(self):
        print("Friendly!")
class GoldenRetriever(Dog, Friendly): # Multiple Inheritance
    def sound(self):
        print("Golden Retriever Barks")
# Usage - Multiple Inheritance
retriever = GoldenRetriever("Charlie")
retriever.displayName()
retriever.greet()
retriever.sound()