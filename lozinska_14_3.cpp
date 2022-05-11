#include <iostream>
#include <fstream>
#include <cstring>


using namespace std;

int main() {
    const char* fname = "test.txt";

    fstream f;
    f.open(fname, fstream::in);

    if (!f) {
        cerr << "cannot open file" << fname << "!";
        return -1;
    }

    string articles[] = { "der", "das", "die" };
    int num_articles = 3;

    string buf;
    bool isArticle = false;

    fstream g;
    g.open("tmpfile.txt", fstream::out);

    if (!g) {
        cerr << "cannot open file" << "tmpfile.txt" << "!";
        return -1;
    }

    while (!f.eof()) {
        f >> buf; // read word by word

        if (isArticle) {
            buf[0] = toupper(buf[0]);
        }
        g << buf << " ";
        cout << buf << " ";
        isArticle = false;
        for (int i = 0; i < num_articles; i++) {
            if (buf == articles[i]) {
                isArticle = true;
                break;
            }
        }
    }
    f.close();
    g.close();

    rename("tmpfile.txt", fname);

}