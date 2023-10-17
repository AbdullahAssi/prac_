#include<iostream>
using namespace std;
int main(){
	int per,star;
	cout<<"Enter the number of persons = ";
	cin>>per;
	cout<<"Enter the ranking of hotel =";
	cin>>star;
	if(per==1 && star==5)
	cout<<"Your bill is 10,000\n";
	else if (per==2 && star==3)
	cout<<"Your bill is 10,000\n";
	else if (per==1 && star==4)
	cout<<"Your bill is 7,000\n";
	else if (per==2 && star==3)
	cout<<"Your bill is  7,000\n";
	else if (per==1 && star==3)
	cout<<"Your bill is 5,000";
	else if (per==2 && star==2)
	cout<<"Your bill is 5,000";
	else
	cout<<"Invalid Value!";
	return 0;
}
