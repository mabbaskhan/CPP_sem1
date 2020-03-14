#include<iostream>
using namespace std;

class Car {
    public:
    string company, model, fuel;
    int year, price;

    //static variable: Shared by all class instances.
    static int numberOfCars;
    
    Car(string company, string model, int year, string fuel) {
        this->company = company;
        this->model = model;
        this->year = year;
        this->fuel = fuel;
        numberOfCars++;
    }

    //Polymorphism: Method overriding:
    // A function defined by base class and redefined by child classes using there own values.

    void setPrice(int price) {
        this->price = price;
    }

    void printCar() {
        cout<<">> Company: " << company << ", Model: " << model << ", Year: " << year << ", Fuel: " << fuel << ", Price: " << price;
    }
};

int Car::numberOfCars = 0;

class Toyota: public Car {
    public:
    string uniqueProperty;

    Toyota(string company, string model, int year, string fuel, string uniqueProperty):Car(company, model, year, fuel) {
        this->uniqueProperty = uniqueProperty;
    }

    void setPrice(int price) {
        this->price = price;
    }

    public:
    void printUniqueProperty() {
        cout << ", Unique Property: " << uniqueProperty << endl;
        cout<<">> Number of Cars: " << numberOfCars << endl;
    }
};

class Tesla: public Car {
    public:
    string uniqueProperty;

    Tesla(string company, string model, int year, string fuel, string uniqueProperty):Car(company, model, year, fuel) {
        this->uniqueProperty = uniqueProperty;
    }

    void setPrice(int price) {
        this->price = price;
    }

    public:
    void printUniqueProperty() {
        cout << ", Unique Property: " << uniqueProperty << endl;
        cout<<">> Number of Cars: " << numberOfCars << endl;
    }
};


int main() {
    Toyota toyota("Toyota", "Corolla", 2018, "Petrol", "Reliable");
    toyota.setPrice(100000);
    toyota.printCar();
    toyota.printUniqueProperty();

    Tesla tesla("Tesla", "Tesla-X10", 2018, "Electric", "Reliable, 100% Electric");
    tesla.setPrice(2000000);
    tesla.printCar();
    tesla.printUniqueProperty();

    toyota.printUniqueProperty();
}