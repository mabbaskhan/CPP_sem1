#include<iostream>
using namespace std;

void displyElements(int arr[], int n) {
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        cout<<endl;
        

    }
}
void bubbleSort(int arr[], int n) {
    int temp, i, j;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(arr[j] > arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }                                         
        }

    }        
}        

        
    


int main() {
    int arr[] = {6,7,3,4,2,1,9,8,0,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout<<"Sorted array"<<" ";
    displyElements(arr, n);

}
