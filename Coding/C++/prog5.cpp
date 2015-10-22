// prog5.cpp : A program to read file into a string object and display it.

# include <iostream>
# include <fstream>
# include <string>

using namespace std;

int main () {

	ifstream infile ("sample.txt");
	string str, line;
	
	while (getline(infile,line)) {
		str += line + "\n";
	}

	cout << "File read completely and here is the content of sample.txt: "<<endl;
	cout << str << endl;

	return (0);
}
