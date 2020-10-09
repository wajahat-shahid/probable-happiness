#include <iostream>

using namespace std;

int main ()
{
	
	for (int i=0;i<5;i++)
		cout<<"I love Pakistan."<<endl;	

	//selction mechanism
	bool isTodayFriday;
	
	char option;
	cout<<"Enter y for yes and n for no: ";
	cin>>option;
	
	if(option=='y')
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
