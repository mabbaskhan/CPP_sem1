#include<bits/stdc++.h>
using namespace std;


    
}

void asendingSort(int arr, int n) {
    sort(arr, arr+n);
    cout<<"asend sort array";
    for(int i=0; i<n; i++) {
        cout<<arr[i];
    }
}
void desendingSort(int arr, int n) {
    sort(arr, arr+n, greater<int>());
    cout<<"desend sort array";
    for (int i=0; i<n; i++) {
        cout<<arr[i];
    }
} 
int main() {
    int arr[] = {6,7,9,3,1,5,8,2,4,0};
    int n =sizeof(arr)/sizeof(arr[0]);

    asendingSort(arr, n);

    desendingSort(arr, n);
    
}