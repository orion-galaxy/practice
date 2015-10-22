// prog9.cpp : A simple program to print the address of variables and function

# include <iostream>

using namespace std;

int num1, num2;

void function (int num3) {
	cout << "Value of num3: "<<num3<<endl;
}

int main() {

	int num3;

	cout	<< "Address of num1: "<< &num1<<endl;
	cout	<< "Address of num2: "<< &num2<<endl;
	cout	<< "Address of function(int): "<< &function<<endl;
	
	
	cout	<< "Address of num1: "<< (long)&num1<<endl;
	cout	<< "Address of num2: "<< (long)&num2<<endl;
	cout	<< "Address of function(int): "<< (long)&function<<endl;

	return (0);
}
