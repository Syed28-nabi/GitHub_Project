# Base class 1
class Mother:
    motherName = ""
    def mother(self):
        print(self.motherName)
# Base class 2
class Father:
    fatherName = ""
    def father(self):
        print(self.fatherName)
# Derived class
class Son(Mother, Father):
    sonName = ""
    def name(self):
        print("Name :", self.sonName)
    def parents(self):
        print("Father :", self.fatherName)
        print("Mother :", self.motherName)
# Driver code
s1 = Son()
s1.sonName = "Haabeel"
s1.fatherName = "Adam"
s1.motherName = "Hawwa"
s1.name()
s1.parents()
