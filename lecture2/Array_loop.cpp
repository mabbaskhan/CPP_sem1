#include<iostream>
using namespace std;

int main() {

    int listLength = 7;
    int list[listLength] = {100, 80, 20, 10, 50, 1, 0};
    cout << "unsorted lis \n";
    
    for(int i = 0; i < listLength; i++) {
        for(int j = 0; j < listLength; j++) {
            if(list[j] > list[i];) {
                int temp = list[1];
                list[1] = list[j];
                list[j] = temp;

            }
        }
    }
    cout<<"sorted list \n";

}