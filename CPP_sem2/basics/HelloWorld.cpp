#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
    string name;
    private:
    int semester;
    public:
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

    void setSemester(int sem) {
        semester = sem;
    }

    void displyaSemester() {
        cout<<semester;
        cout<<endl;
    }

};

int main() {
    Student object("Abbas", 2);
    object.displayName();
    object.displayAge(20);
    object.displyaSemester();

    object.setSemester(4);
    object.displyaSemester();
}