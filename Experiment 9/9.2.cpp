#include <iostream>
#include <fstream>
#include <cctype> 
 using namespace std;

int main() { 
    ifstream fin("Data.txt");
    char ch;
    int digits = 0, spaces = 0;
    
    while (fin.get(ch)) {
        if (isdigit(ch)) digits++;
        if (ch == ' ') spaces++;
    }
    
    cout << "Digits " << digits << endl;
    cout << "Spaces " << spaces << endl;
    fin.close();
    return 0;
}