/**
	Semister 1, Programming lecture 1
	Object: Student
*/

#include<iostream>
using namespace std;

int main() {
	int id = 0; // initialization, assigning value to a variable at the time of definition.
	int totalMarks;
	int marksObtained;
	int marksPercentage;
	string name;
	string subject;

	id = 1; // assignment, expression
	subject = "Computer Science"; // assignment, expression
	totalMarks = 1100; // assignment, expression
	marksObtained = 650; // assignment, expression
	marksPercentage = (650 * 100) / 1100; // assignment, expression

	cout<<"Enter Name: ";
	cin>>name; // assignment, expression
	cout<< "Student Detail\nName: " <<name <<"\nid: " << id << "\nMarks Percentage: " << marksPercentage <<"%";
	cout<<"\n";
	
	cout.precision(6);
	double decimalNumber = 10.002345;
	cout<< "Decimal Numeber: " << decimalNumber;
	cout<<"\n";

	int balance = 100; // initial balance (initialization)
	int deposit = 0;
	int withdrawl = 0;
	cout<<"Enter Deposit: ";
	cin>>deposit;
	balance += deposit; // increment
	cout<<"Current Balance: " << balance;
	cout<<"\n";
	cout<< "Enter Withdrawl: ";
	cin>>withdrawl;
	balance -= withdrawl; // decrement
	cout<<"Current Balance: " << balance;
	cout<<"\n";
}