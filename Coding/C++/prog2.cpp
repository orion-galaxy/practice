// prog2.cpp : This program is input a number and print that in decimal, octal and hex format

# include <iostream>

using namespace std;

int main () {

	int number = 0;
	
	cout 	<< "Please enter any number: ";
	cin	>> number;
	
	cout	<< "Entered number in decimal: "
		<< dec << number << endl;
	cout	<< "Entered number in octal: 0"
		<< oct << number << endl;
	cout	<< "Entered number in hex: 0x"
		<< hex << number << endl;

	return (0);
}
