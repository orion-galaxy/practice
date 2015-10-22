//prog7.cpp: A simple program to demonstrate vector of strings. Reading sample.txt into a vector

# include <iostream>
# include <fstream>
# include <string>
# include <vector>

using namespace std;

int main() {
	

	//Another method
	
	ifstream infile1 ("sample.txt");
	vector <string> vtr1;
	string str;

	while (infile1 >> str) {
		vtr1.push_back(str);
	}

	cout 	<< "Another method to read file using >> operator..."<<endl;
	cout	<< "File sample.txt is read in vector.... "<<endl;
	cout 	<< "Print vector vtr1 of size: "
		<< vtr1.size()<<endl;

	for (int i=0; i<vtr1.size();i++) {
		cout << i <<": "<< vtr1[i]<<endl;
	}
	
	return (0);
}
