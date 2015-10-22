// prog10.cpp : A program to demonstrate pass by value and pass by reference

#include <iostream>

using namespace std;

void pass_by_value (int val) {
	cout << "Inside pass_by_value function with val = "<<val<<endl;
	val = 10;
	cout << "Exiting pass_by_value function with val= "<<val<<endl;
}

void pass_by_reference (int *ptr) {
	cout 	<< "Inside pass_by_reference function with "
		<< "ptr = "<<ptr
		<< " and *ptr = "<<*ptr<<endl;
	*ptr = 20;
	cout 	<< "Exiting pass_by_reference function with "
		<< "ptr = "<<ptr
		<< " and *ptr = "<<*ptr<<endl;
}

int main () {

	int num1 = 50;

	cout	<< "Value of num1 = "<<num1<<endl;
	cout	<< "Calling pass_by_value function...."<<endl;
	pass_by_value(num1);
	cout	<< "Returned from pass_by_value function...."<<endl;
	cout	<< "Value of num1 = "<<num1<<endl;

	cout	<< "Calling pass_by_reference function...."<<endl;
	cout	<< "Address of num1 = "
		<<&num1<< "Value of num1 = "<<num1<<endl;
	pass_by_reference(&num1);
	cout	<< "Returned from pass_by_reference function...."<<endl;
	cout	<< "Address of num1 = "
		<<&num1<< "Value of num1 = "<<num1<<endl;
	
	return (0);
}
	
