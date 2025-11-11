 #include <iostream>
 #include <string>
 using namespace std;

class concate_string {
public:
    string str;
    
    concate_string operator + (const concate_string& other) {
        concate_string result;
        result.str = str + other.str;
        return result;
    }
    
    void display() {
        cout << str << endl;
    }
};

int main() {
    concate_string s1, s2, s3;
    s1.str = "abc";
   s2.str = "xyz";
   s3 = s1 + s2;
   s3.display();
    return 0;
}