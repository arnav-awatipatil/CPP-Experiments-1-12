 #include <iostream>
 #include <fstream>
#include <string>
 using namespace std;

int main() { 
    ifstream fin("Data.txt");
    string word;
    int count = 0;
    
    while (fin >> word) {
        count++;
    }
    
    cout << "Total words: " << count << endl;
    fin.close();
    return 0;
}