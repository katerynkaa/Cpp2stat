#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

typedef struct {
    int day;
    int month;
    int year;
}Date;

bool compare(const Date& d1, const Date& d2){

    if (d1.year < d2.year)
        return true;
    if (d1.year == d2.year && d1.month < d2.month)
        return true;
    if (d1.year == d2.year && d1.month == d2.month &&
        d1.day < d2.day)
        return true;

    return false;
}

void sortDates(Date arr[], int n){
    sort(arr, arr + n, compare);
}

void output(Date tmp[], int n) {
    for (int i = 0; i < n + 1; i++) {
        cout << tmp[i].day << " " << tmp[i].month << " " << tmp[i].year << endl;
    }
}

void outputFile(Date tmp[], int n) {
    ofstream outdata; 
    int i; 

    outdata.open("dates_formatted.txt"); 
    if (!outdata) { 
        cerr << "Error: file could not be opened" << endl;
        exit(1);
    }

    for (i = 0; i < n; ++i) {
        outdata << tmp[i].day << ' ' << tmp[i].month << ' ' << tmp[i].year << endl;
    }
    outdata.close();
}

string openFile(string filename) {
    ifstream indata;
    char c;

    indata.open(filename);
    if (!indata) {
        cerr << "file could not be opened" << endl;
        exit(1);
    }

    Date tmp[50];
    string res, numbers = "1234567890";

    int ccounter = 0, scounter = 0;

    indata >> c;
    while (!indata.eof()) {
        if (c == ',') {
            ccounter += 1;
            scounter = 0;
            res = "";
        }
        if (c == '/' || c == ')') {
            scounter += 1;
            if (scounter == 1) {
                tmp[ccounter].day = stoi(res);
                res = "";
            }
            if (scounter == 2) {
                tmp[ccounter].month = stoi(res);
                res = "";
            }
            if (scounter == 3) {
                tmp[ccounter].year = stoi(res);
                res = "";
            }
        }
        if (numbers.find(c) != string::npos) {
            res += c;

        }
        indata >> c;
        
    }

    //mas len 1+i
    indata.close();
    
    sortDates(tmp, ccounter+1);
    output(tmp, ccounter);
    outputFile(tmp, ccounter + 1);
}

int main(){
    string filename = "date.txt";
    openFile(filename);
}