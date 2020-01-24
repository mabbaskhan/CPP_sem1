#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2,4,5,7,8,9,0,3,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n,greater<int>());
    cout<<"\n desend sorted arr \n";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" "; 
    }
}