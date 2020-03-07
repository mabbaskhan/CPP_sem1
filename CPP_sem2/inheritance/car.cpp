#include<iostream>
using namespace std;

class Car {
    public:
    string company, model, fuel;
    int year;

    Car(string company, string model, int year, string fuel) {
        this->company = company;
        this->model = model;
        this->year = year;
        this->fuel = fuel;
    }

    void printCar() {
        cout<<">> Company: " << company << ", Model: " << model << ", Year: " << year << ", Fuel: " << fuel;
    }
};


class Toyota: public Car {
    public:
    string uniqueProperty;

    Toyota(string company, string model, int year, string fuel, string uniqueProperty):Car(company, model, year, fuel) {
        this->uniqueProperty = uniqueProperty;
    }

    public:
    void printUniqueProperty() {
        cout << ", Unique Property: " << uniqueProperty << endl;
    }
};

class Tesla: public Car {
    public:
    string uniqueProperty;

    Tesla(string company, string model, int year, string fuel, string uniqueProperty):Car(company, model, year, fuel) {
        this->uniqueProperty = uniqueProperty;
    }

    public:
    void printUniqueProperty() {
        cout << ", Unique Property: " << uniqueProperty << endl;
    }
};


int main() {
    Toyota toyota("Toyota", "Corolla", 2018, "Petrol", "Reliable");
    toyota.printCar();
    toyota.printUniqueProperty();

    Tesla tesla("Tesla", "Tesla-X10", 2018, "Electric", "Reliable, 100% Electric");
    tesla.printCar();
    tesla.printUniqueProperty();
}