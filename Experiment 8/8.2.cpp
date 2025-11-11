 #include <iostream>
 #include <string>
 using namespace std;

class Ilogin {
public:
    string name, pass;
    
    virtual void accept() {
        cout << "Enter name:";
        cin >> name;
        cout << "Enter password: ";
        cin >> pass;
    }
    
    virtual void display() {
        cout << "Name:" << name << " Password: " << pass << endl;
    }
};

class EmailLogin : public Ilogin {
public:
    void display() override {
        cout << "Email login: " << name << " password " << pass << endl;
    }
};

class MembershipLogin : public Ilogin {
public:
    void display() override {
        cout << "Membership login " << name << " " << pass << endl;
    }
};

 int main() {
     Ilogin *l;
     EmailLogin e;
     MembershipLogin m;
    l = &e; 
    l->accept();   
     l->display();
    
    l = &m;
   l->accept();
   l->display();
    
    return 0;
 }