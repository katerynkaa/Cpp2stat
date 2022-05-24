#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string converter(int num) {
    int binary = 0, remainder, product = 1;
    while (num != 0) {
        remainder = num % 2;
        binary = binary + (remainder * product);
        num = num / 2;
        product *= 10;
    }
    return to_string(binary);
}

void replacer(string beforeMas[], string afterMas[], int n) {
    ifstream file;
    ofstream fileout;
    file.open("text.txt");
    fileout.open("temp.txt");
    if (!fileout) {
        cerr << "file could not be opened" << endl;
        exit(1);
    }

    string line;
    while (getline(file, line)) {
        for (int i = 0; i < n; i++) {
            string beforeNum = beforeMas[i];
            string afterNum = afterMas[i];

            size_t len = beforeNum.length();
            size_t pos = line.find(beforeNum);

            line.replace(pos, len, afterNum);
        }
        fileout << line;
    }
    file.close();
    fileout.close();
}

int main() {
    ifstream file;
    char c;

    file.open("text.txt");
    if (!file) {
        cerr << "file could not be opened" << endl;
        exit(1);
    }

    string res, numbers = "1234567890";
    string repmas[50];
    string conmas[50];
    int n = 0;
    int m = 0;
    file >> c;
    while (!file.eof()) {
        if (numbers.find(c) != string::npos)  res += c;
        if (c == '.' && res.length()!=0) {
            string td = converter(stoi(res));
            
            repmas[n++] = res;
            conmas[m++] = td;
            res = "";
        }
        file >> c;
    }
    replacer(repmas, conmas, n);
    delete[] repmas;
    delete[] conmas;
    
}
		