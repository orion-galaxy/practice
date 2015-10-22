//prog4.cpp : This program is for reading and writing files. Copying README file to sample.txt

# include <fstream>
# include <string>
# include <iostream> 

using namespace std;

int main () {

	ifstream infile ("README");
	ofstream outfile ("sample.txt");
	string str;

	while (getline(infile, str)) {
		outfile << str << "\n";
	}

	cout << "README file is copied to sample.txt"<<endl;
	return (0);
}
