//prog3.cpp : This program is to demostrate the string class 

# include <iostream>
# include <string>

using namespace std;

int main () {

	string str1, str2;
	string str3 = "Hello World";
	string str4("This is my");

	str2 = "Program";
	str1 = str3 + " " + str4;
	str1 += " 4th ";
	str1 += str2;

	cout 	<< "Final String is : "
		<< str1 << endl;

	return (0);
}
