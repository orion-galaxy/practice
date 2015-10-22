// prog11.cpp : A simple program to demonstrate void pointer and type casting

#include <iostream>

using namespace std;

int main () {

	int num1 = 10;
	char ch = 'A';
	float flnum = 3.14;

	void *vptr = NULL;

	vptr = &num1;
	cout 	<< " Value of num1: "<<num1
		<< " Address of vptr: "<<&vptr
		<< " Value of vptr: "<<*(int*)vptr<<endl;

	vptr = &ch;
	cout 	<< " Value of ch: "<<ch
		<< " Address of vptr: "<<&vptr
		<< " Value of vptr: "<<*(char*)vptr<<endl;

	vptr = &flnum;
	cout 	<< " Value of flnum: "<<flnum
		<< " Address of vptr: "<<&vptr
		<< " Value of vptr: "<<*(float*)vptr<<endl;

	return (0);
}
