#include <iostream>
using namespace std;
class book
{     
	public:
		string name;
	        float price;
	        int pages;
	        
		void accept()
		{
			cout <<"Enter Book name"<< endl;
			cin >> name;
			cout <<"Enter Price "<< endl;
			cin >> price;
			cout <<"Enter no of pages" << endl;
			cin >> pages;
		}
		void disp()
		{
			cout << "Book name " << name << endl;
			cout <<"Book price" <<price << endl;
			cout <<"Number of pages"<< pages << endl;
		
	
		}
};

int main()
{
	book b1,b2;
	b1.accept();
	b2.accept();
	b1.disp();
	b2.disp();
		if(b1.price>b2.price){
			cout <<"Book " << b1.name <<" Is greater in price "<< b1.price;
		}
		else{
			cout <<"Book " << b2.name <<" Is greater in price "<< b2.price;
		}
	return 0;
}