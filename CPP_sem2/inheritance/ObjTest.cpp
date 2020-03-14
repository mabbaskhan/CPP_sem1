#include<iostream>
using namespace std;

class ObjTest {
    public: 
    string name;
    int a = 10;
    
    ObjTest() {
        name = "";
    }
    
    ObjTest(string name) {
        this->name = name;
    }

    // Poly morphism, function overloading: 
    // two are more same functions with same name and return type
    //but different parameter list
    void printObj() {
        cout<<name << endl;
        cout << a << endl;
        int b = 20;
    }

    void printObj(string arg) {
        cout<< arg;
    }
};


int main() {
    ObjTest obj("Test Object");
    obj.printObj();
    obj.a = 20;
    obj.printObj();
    obj.printObj("my args");
}