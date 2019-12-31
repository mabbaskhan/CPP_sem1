#include<iostream>
using namespace std;

int main() {
    int n{-1};
    do {
        cout<<"N = " << n <<"\n";
        cout<<"Enter positive digit to continue or negative to exit"<<endl;
        cin>> n;
    } while (n > -1);
}
    