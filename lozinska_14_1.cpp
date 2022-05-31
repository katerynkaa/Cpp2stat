#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(int argc, char** argv) {
	const char* fname = "task.txt";
	fstream f(fname, fstream::in);

	if (!f) {
		cerr << "cannot open file " << fname << "!";
		return -1;
	}

	string buf;
	f >> buf;
	clog << "Buf=" << buf << ";\n";

	int sum_expr = 0;
	int num = 0;
	int prevSign = 0;
	for (size_t i = 0; i < buf.length(); i++) {
		if (isdigit(buf[i])) {
			//printf("1 %d\n", num);
			num = 10 * num;
			//printf("2 %d\n", num);
			num += (buf[i] - '0');
			//printf("3 %d\n", num);
		}
		else if (buf[i] == '+') {
			if (prevSign == 0) {
				sum_expr += num;
			}
			else {
				sum_expr -= num;
			}
			num = 0;
			prevSign = 0;
		}
		else if (buf[i] == '-') {
			if (prevSign == 0) {
				sum_expr += num;
			}
			else {
				sum_expr -= num;
			}
			num = 0;
			prevSign = 1;
		}
		else if (buf[i] == '=') {
			if (prevSign == 0) {
				sum_expr += num;
			}
			else {
				sum_expr -= num;
			}
			break;
		}
		else {
			cerr << "Cannot read char";
		}
	}
	cout << sum_expr;
}