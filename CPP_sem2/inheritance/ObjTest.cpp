#include<iostream>
using namespace std;

class ObjTest {
    public: 
    string name;
    int a = 10;
    
    ObjTest(string name) {
        this->name = name;
    }

    void printObj() {
        cout<<name << endl;
        cout << a << endl;
        int b = 20;
    }

    void printObj2() {
        cout << b;
    }
};


int main() {
    ObjTest obj("Test Object");
    obj.printObj();
    obj.a = 20;
    obj.printObj();
}