#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string brand;
    string model;
    int year;

public:
    // Constructor for Vehicle class
    Vehicle(string brand, string model, int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    // Member function to display vehicle details
    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle {
private:
    int numDoors;

public:
    // Constructor for Car class
    Car(string brand, string model, int year, int numDoors) : Vehicle(brand, model, year) {
        this->numDoors = numDoors;
    }

    // Member function to display car details
    void displayDetails() {
        Vehicle::displayDetails();
        cout << "Number of Doors: " << numDoors << endl;
    }
};

class Motorcycle : public Vehicle {
private:
    int engineCapacity;

public:
    // Constructor for Motorcycle class
    Motorcycle(string brand, string model, int year, int engineCapacity) : Vehicle(brand, model, year) {
        this->engineCapacity = engineCapacity;
    }

    // Member function to display motorcycle details
    void displayDetails() {
        Vehicle::displayDetails();
        cout << "Engine Capacity: " << engineCapacity << "cc" << endl;
    }
};

class Truck : public Vehicle {
private:
    int payloadCapacity;

public:
    // Constructor for Truck class
    Truck(string brand, string model, int year, int payloadCapacity) : Vehicle(brand, model, year) {
        this->payloadCapacity = payloadCapacity;
    }

    // Member function to display truck details
    void displayDetails() {
        Vehicle::displayDetails();
        cout << "Payload Capacity: " << payloadCapacity << "kg" << endl;
    }
};

int main() {
    // Create objects for different types of vehicles
    Car car("Toyota", "Corolla", 2020, 4);
    Motorcycle motorcycle("Honda", "CBR500R", 2020, 500);
    Truck truck("Ford", "F-150", 2020, 2000);

    // Display vehicle details
    cout << "Car Details:" << endl;
    car.displayDetails();
    cout << endl;

    cout << "Motorcycle Details:" << endl;
    motorcycle.displayDetails();
    cout << endl;

    cout << "Truck Details:" << endl;
    truck.displayDetails();
    cout << endl;

    return 0;
}