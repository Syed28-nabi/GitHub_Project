class Vehicle:
    def move(self):
        print("Vehicle moves")
class Car(Vehicle):
    def drive(self):
        print("Car drives")
class Boat(Vehicle):
    def sail(self):
        print("Boat sails")
class AmphibiousVehicle(Car, Boat):
    def amphibiousAction(self):
        print("Amphibious vehicle can both drive and sail")
amphibiousVehicle = AmphibiousVehicle()
amphibiousVehicle.move()
amphibiousVehicle.drive()
amphibiousVehicle.sail()
amphibiousVehicle.amphibiousAction()