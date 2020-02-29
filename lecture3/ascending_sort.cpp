#include <bits/stdc++.h>
using namespace std; 
  
int main() {
    int arr[] = {3, 4, 1, 6, 7, 9, 0, 2, 5, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    cout<< "\nArray after sorting using default sort is : \n" ;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
   
    return 0;
} 
