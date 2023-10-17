#include<iostream>
using namespace std;
int main(){
	int bill,unit,tbill1,tbill2;
	cout<<"Enter Your unit:";
	cin>>unit;
	cout<<"\n";
	cout<<"ENter 1 if it is commericial or 2 for residential:";
	cin>>bill;
	cout<<"\n";
	if(bill==1)
		{
			tbill1=unit*40;
			cout<<"Your Bill is"<<tbill1<<endl;
			tbill2=(tbill1*17)/100;
			cout<<"Your Total Bill is:"<<tbill2;
		}
	else if(bill==2)
	{
		tbill1=unit*25;
		cout<<"Your bill is :"<<tbill1<<endl;
		tbill2=(tbill2*10)/100;
		cout<<"Your Total bill is :"<<tbill2;
	}
	else{
		cout<<"Invalid Value!";
	}
}
