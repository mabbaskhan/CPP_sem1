#include<iostream>
using namespace std;

void displayArrayElements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

void bubbleSort(int arr_a[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr_a[j] > arr_a[i]) {
                int temp = arr_a[i];
                arr_a[i] = arr_a[j];
                arr_a[j] = temp;
            }
        }
    }
}

void selectionSort(int arr_b[], int n) {
    int min_index;
    int i, j;
    for(i = 0; i < n; i++) {
        min_index = i;
        for(j = 0; j < n; j++) {
            if(arr_b[j] < arr_b[min_index]) {
                min_index = j;
            }
        }
        int temp = arr_b[i];
        arr_b[i] = arr_b[j];
        arr_b[j] = temp;
    }
}

int main() {
    int min_idx;

    int arr_a[7] = {64, 34, 25, 12, 22, 11, 90};
    int arr_b[7] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr_a)/sizeof(arr_a[0]);
    
    cout<<"arr_a Elements: ";
    displayArrayElements(arr_a, n);
    cout<<"Sorting arr_a using Bubble Sort algorithm: ";
    bubbleSort(arr_a, n);
    displayArrayElements(arr_a, n);

    cout<<"arr_b Elements: ";
    displayArrayElements(arr_b, n);
    cout<<"Sorting arr_b using Selection Sort algorithm: ";
    selectionSort(arr_b, n);
    displayArrayElements(arr_b, n);
}
