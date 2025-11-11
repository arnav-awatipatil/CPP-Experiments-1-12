#include <iostream>
#include <string>
using namespace std;

class book {
    string book_title;
    string author_name;
    int price;

public:
    void accept() {
        cout << "Enter title: " << endl;
        cin >> this->book_title;
        cout << "Enter author name: " << endl;
        cin >> this->author_name;
        cout << "Enter price: " << endl;
        cin >> this->price;
    }

    void display() {
        cout << "The book title: " << this->book_title << endl;
        cout << "The author: " << this->author_name << endl;
        cout << "The price: " << this->price << endl;
    }
};

int main() {
    book b;
    book * p;
    p=&b;
    p->accept();
    p->display();
    
   
    return 0;
}