//prog8.cpp : A program to evaluate size of various data types and specifiers (both 32 and 64 bit)

#include <iostream>

using namespace std;

int main () {

	cout	<< "Size of various data types , specifiers and pointers => "<<endl;
	cout	<< "Integer ==>"<<endl;
	cout 	<< "Size of (int): "
		<< sizeof(int)<<"bytes"<<endl;
	cout	<< "Size of (short int): "
		<< sizeof (short int)<<"bytes"<<endl;
	cout	<< "Size of (long int): "
		<< sizeof (long int)<<"bytes"<<endl;
	cout	<< "Size of (signed int): "
		<< sizeof(signed int)<<"bytes"<<endl;
	cout 	<< "Size of (unsigned int): "
		<< sizeof(unsigned int)<<"bytes"<<endl;
	cout	<< "Size of (signed short int): "
		<< sizeof(signed short int)<<"bytes"<<endl;
	cout 	<< "Size of (unsigned short int): "
		<< sizeof(unsigned short int)<<"bytes"<<endl;
	cout	<< "Size of (signed long int): "
		<< sizeof(signed long int)<<"bytes"<<endl;
	cout 	<< "Size of (unsigned long int): "
		<< sizeof(unsigned long int)<<"bytes"<<endl;
	cout	<< "Size of (bool): "
		<< sizeof (bool)<<"bytes"<<endl;

	cout	<< "Float ==> "<<endl;
	cout	<< "Size of (float): "
		<< sizeof(float)<<"bytes"<<endl;
	cout	<< "Size of (double): "
		<< sizeof(double)<<"bytes"<<endl;
	cout	<< "Size of (long double): "
		<< sizeof(long double)<<"bytes"<<endl;

	cout	<< "Char ==> "<<endl;
	cout	<< "Size of (char): "
		<< sizeof(char)<<"bytes"<<endl;
	cout	<< "Size of (signed char): "
		<< sizeof(signed char)<<"bytes"<<endl;
	cout	<< "Size of (unsigned char): "
		<< sizeof(unsigned char)<<"bytes"<<endl;

	cout	<< "Pointers ==> "<<endl;
	cout	<< "Size of (int *): "
		<< sizeof(int *)<<"bytes"<<endl;
	cout	<< "Size of (float *): "
		<< sizeof(float *)<<"bytes"<<endl;
	cout	<< "Size of (char *): "
		<< sizeof(char *)<<"bytes"<<endl;

	return (0);
}
