#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter Your Number =";
	cin>>num;
	switch(num%2==0)
	{
		case 1:
			cout<<"Your Number is Even";
			break;
		default:
			cout<<"Your Number is odd";
			break;
	}
	return 0;
}
