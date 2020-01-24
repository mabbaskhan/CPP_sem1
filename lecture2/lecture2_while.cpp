// bug in if else statment

#include<iostream>
using namespace std;

int main() {
    string command = "continue";
    bool repeat = true;
    int counter = 0;
    while(repeat) {
        // Student entries

        // studen entries end

        cout << "Enter exit to close or continue to repeat: ";
        cout << counter++;
        cout << endl;
        cin >> command;
        if (command == "continue") {
            repeat = true;
        } else if (command == "exit") {
            repeat = false;
        }
    }      
}