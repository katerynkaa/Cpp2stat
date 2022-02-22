//task 1.24

#include <stdio.h>
#include <string>
#include <iostream>


int main(){

    int n=2, m=5;
    std::string s1, s2;

    s1.insert(s1.begin(), n - s1.length(), ' ');
    s2.insert(s2.begin(), 2*n - s2.length(), ' ');
    std::cout << s1 <<  m << std::endl;
    std::cout << s2 << m*m << std::endl;
}