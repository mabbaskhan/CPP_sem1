#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
    string name;

    Student(string name) {
        this->name = name;
    }
    void displayName() {
        cout<<name;
        cout<<endl;
    }

    void displayAge(int age) {
        cout<<age<<endl;
    }

};

int main() {
    Student abbas("Abbas");
    abbas.displayName();
    abbas.displayAge(20);
}