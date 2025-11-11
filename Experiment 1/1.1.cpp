#include <iostream>
using namespace std;
class student
{
	private: 
	        string name;
	        int rollno;
	        
	public:
		void accept()
		{
			cout <<"Enter student name"<< endl;
			cin >> name;
			cout <<"Enter roll number"<< endl;
			cin >> rollno;
		}
		void disp()
		{
			cout << "Student name " << name << endl;
			cout <<"Student roll no " <<rollno << endl;
		}
};

int main()
{
	student s1;
	s1.accept();
	s1.disp();
	return 0;
}