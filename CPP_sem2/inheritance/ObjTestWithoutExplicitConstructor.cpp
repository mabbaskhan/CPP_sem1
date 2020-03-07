#include<iostream>
using namespace std;

class ObjTest2 {
    public: 
    string name;
    
    void setName(string name) {
        this->name = name;
    }

    void printObj() {
        cout<<"Name: " << name << endl;
    }
};


int main() {
    ObjTest2 obj;
    obj.printObj();
    obj.setName("Abbas");
    obj.printObj();
}