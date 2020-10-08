#include <iostream>

using namespace std;

int main ()
{
	
	for (int i=0;i<5;i++)
		cout<<"I love Pakistan."<<endl;	

	bool isTodayFriday;
	
	char opt;
	cout<<"Enter y for yes and n for no: ";
	cin>>opt;
	
	if(opt=='y')
	isTodayFriday=true;
	else
	isTodayFriday=false;
	
	if(isTodayFriday)
	cout<<"Bhai Nahana Parey gaa";
	else
	cout<<"Khaire hi hia Cheetey";
	
	if(isTodayFriday)
	cout<<"Bhai Nahana Parey gaa";
	else
	cout<<"Khaire hi hia Cheetey";
}
