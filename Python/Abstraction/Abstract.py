from abc import ABC, abstractmethod

# Abstract Class
class Shape(ABC):
    
    def __init__(self, c):
        self.color = c
    
    def get_color(self):
        return self.color
    
    @abstractmethod
    def get_area(self):
        pass


# Square Class
class Square(Shape):
    
    def __init__(self, c, side):
        super().__init__(c)
        self.side = side
    
    def get_area(self):
        return self.side * self.side


# Rectangle Class
class Rectangle(Shape):
    
    def __init__(self, c, length, breadth):
        super().__init__(c)
        self.length = length
        self.breadth = breadth
    
    def get_area(self):
        return self.length * self.breadth


# Triangle Class
class Triangle(Shape):
    
    def __init__(self, c, base, height):
        super().__init__(c)
        self.base = base
        self.height = height
    
    def get_area(self):
        return 0.5 * self.base * self.height


# Circle Class
class Circle(Shape):
    
    def __init__(self, c, radius):
        super().__init__(c)
        self.radius = radius
    
    def get_area(self):
        return 3.14 * self.radius * self.radius


# Driver Code
shapes = [
    Square("red", 5),
    Rectangle("blue", 4, 6),
    Triangle("green", 3, 8),
    Circle("yellow", 7)
]

for shape in shapes:
    print(shape.get_color(), shape.get_area())