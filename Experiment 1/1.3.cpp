#include <iostream>
using namespace std;
class TimeData
{     
	public:
		    float hours;
	        float mins;
	        float sec;
	        
		void accept()
		{
			cout <<"Enter Hours"<< endl;
			cin >> hours;
			cout <<"Enter mins "<< endl;
			cin >> mins;
			cout <<"Enter sec" << endl;
			cin >> sec;
		}
		void disp()
		{
			cout << "Hours" << hours << endl;
			cout <<"Mins" <<mins << endl;
			cout <<"secs"<< sec << endl;
		
	
		}
};

int main()
{
	int a,b,c,converted;
	TimeData t1;
	t1.accept();
	t1.disp();
	a=t1.mins*60;
	b=t1.hours*3600;
	c=t1.sec;
	converted=a+b+c;
	cout << " Converted time is " <<converted;
	
	return 0;
	
}