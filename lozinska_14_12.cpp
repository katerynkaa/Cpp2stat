#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void spaceDeleter(string filename) {
	ifstream file(filename);
	ofstream outfile("new.txt");
	string str;

	while (file >> str)
		if (str == ".") {
			outfile << "." << '\n';
		}
		else outfile << str << " ";

	const char* fname = filename.c_str();
	file.close();
	outfile.close();
	remove(fname);
	rename("new.txt", fname);
}

void fileCreator(string filename, int n, string line) {
	ofstream file;
	file.open(filename);

	for (int i = 0; i < n; i++) file << line << "\n";

	file.close();
}

int main() {
	string filename;
	int n;
	string line = "    This    is the line   written in FILE  .";
	cout << "How should the file be named?" << endl;
	cin >> filename;
	cout << "How many lines are there in the file?" << endl;
	cin >> n;
	fileCreator(filename, n, line);
	spaceDeleter(filename);

}