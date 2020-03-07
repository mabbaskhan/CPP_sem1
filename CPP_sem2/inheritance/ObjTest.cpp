#include<iostream>
using namespace std;

int a = 20;

class ObjTest {
    public: 
    string name;
    int a = 10;
    
    ObjTest(string name) {
        this->name = name;
    }

    void printObj() {
        cout<<name << endl;
        cout << a + a << endl;
    }
};


int main() {
    ObjTest obj("Test Object");
    obj.printObj();
}