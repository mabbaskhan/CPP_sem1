#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
    string name;
    int semester;

    Student(string name, int semester) {
        this->name = name;
        this->semester = semester;
    }
    void displayName() {
        cout<<name;
        cout<<endl;
    }

    void displayAge(int age) {
        cout<<age<<endl;
    }

    int getSemester() {
        return semester;
    }

};

int main() {
    Student object("Abbas", 2);
    object.displayName();
    object.displayAge(20);
    cout<<object.getSemester();
    cout<<endl;
}