#include <iostream>
using namespace std;

class Account {
public:
    int account_no;
    float balance;

    void accept() {
        cout << "Enter Account No: ";
        cin >> account_no;
        cout << "Enter balance: ";
        cin >> balance;
    }

    void display() {
        cout << "Account no: " << account_no << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a[5]; 

    for (int i = 0; i < 5; i++) {
        a[i].accept();
    }

    cout << "\nAccounts with updated balances: " << endl;
    for (int i = 0; i < 5; i++) {
        if (a[i].balance >= 5000) {
            a[i].balance += a[i].balance * 0.10;
        }
        a[i].display();
    }
    return 0;
}