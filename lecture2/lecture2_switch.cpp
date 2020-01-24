// Switch statement: An alternative of nested if-else statement.
// Part of the program is executed based on the value of switch input.


#include<iostream>
using namespace std;

int main() {
    
    string device;
    int deviceId;

    cout<<"Enter 1 to switch fan or 2 to switch computer or 3 to switch mobile: ";
    cin>>deviceId;
    
    switch(deviceId) {
        case 1:
            cout<<"Fan is switched \n";
            break;
        case 2:
            cout<<"Computer is switched \n";
            break;
        case 3:
            cout<<"Mobile is switched \n";
            break;
        default:
            cout<<"Unrecognized device \n";
            break;
    }

    /**if (deviceId == 1) {
        cout<<"Fan is switched \n";
    } else if (deviceId == 2) {
        cout<<"Computer is switched \n"; 
    } else if (deviceId == 3) {
        cout<<"Mobile is switched \n";
    } else {
        cout<<"Unrecognized device \n";
    }*/
    
    return 0;
}


