// 1. Conditional statements are used when a user has to choose between different options in order
// to execute part of a program based on the user input (choice).

//2. Function: Functions are used to divide a program into smaller parts (module) that improves readability, modifiablity, extensibility.

#include<iostream>
using namespace std;

void chooseRoot() {
    string root1{"Motorway"};
    string root2{"GTRoad"};
    string cmd;
    
    cout<<"Is there any Fog? ";
    cin>>cmd;

    if (cmd == "yes") {
        cout<<root1<<" is closed \n";
        cout<<root2<<" is open \n";
    } else if (cmd == "no") {
        cout<<root2<<" is open \n";
        cout<<root1<<" is open \n";
    } else {
        cout<<"incorrect option \n";
    }

}

void add(int a, int b) {
    cout<<"Sum is: " << a + b;
}

void substract(int a, int b) {
    cout<<"Sub is: "<< a - b;
}

void calculator() {
    int a, b;
    char cmd;
    cout<<"Enter digit a: ";
    cin>>a;
    cout<<"Enter digit b: ";
    cin>>b;
    cout<<"Enter + for addition, - for substraction: ";
    cin>>cmd;
    if (cmd == '+') {
        add(a, b);
    } else if (cmd == '-') {
        substract(a, b);
    } else {
        cout<<"incorrect option \n";
    }
    cout<<endl;
}

int main() {
    chooseRoot();
    calculator();
    return 0;
}

