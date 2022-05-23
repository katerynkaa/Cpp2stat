#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string charErasor(string word) {
    char prelast_char = word[word.length() - 2];
    word.erase(remove(word.begin(), word.end(), prelast_char), word.end());
    return word;
}


string wordGenerator(string str) {
    str += " ";

    string res = "", word = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            word += str[i];
        }
        if (str[i + 1] == ' ' && str[i] != ' ') {
            res += charErasor(word);
            word = "";
        }
        if (str[i] == ' ') {
            res += str[i];
        }
    }
    return res;
}

int main() {
    string str = "assdsd    gikkiif    hodwdy";
    cout << wordGenerator(str);
}
