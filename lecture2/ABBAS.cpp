#include<iostream>
using namespace std;

int main() {
    string command = "yes";
    int a, b, c;
    while(command == "yes") {
        cout<<"Enter two integers \n";
        cin>>a>>b;
        cout<<"sum is ";
        c = a + b;
        cout<< c;
        cout<<endl;
        cout<<"Enter yes to continue or no to stop \n";
        cin>>command;
    }

}