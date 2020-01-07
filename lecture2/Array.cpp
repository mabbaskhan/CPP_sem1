#include <iostream>
using namespace std;
int main() {
    string students[4];
    string grade[4];
    string name;
    char grd;
    int index{0};

    for (int i = 0; i < sizeof(students) / 32; i++) {
        cout<<"Enter student name: ";
        cin>>name;
        students[i] = name;
        cout<<"Enter student grade (A - E): ";
        cin>>grd;
        grade[i] = grd;
    }
    
    cout<<"Enter index (0-3) to display student name and grade: ";
    cin>>index;

    cout << "Student Name: " << students[index] << ", Student Grade: " << grade[index];
    cout << endl;

    cout<<"Enter student name to search: ";
    cin>>name;
    for (int i = 0; i < sizeof(students) / 32; i++) {
        if (students[i] == name) {
            cout << "Student Name: " << students[i] << ", Student Grade: " << grade[i];
            cout << endl;
        }
    }
    return 0;
}