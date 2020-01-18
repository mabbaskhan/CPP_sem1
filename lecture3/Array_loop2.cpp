#include<iostream>
using namespace std;

int main() {
    int arr[5], i;
    for(i=0; i<10; i++) {
        cout<<"Enter an integer:";
        cin>>arr[i];
    }
    cout<<"The value in array are:\n";
    for(i=0; i<5; i++) 
        cout<<arr[i]<<endl;
    return 0;    

}
