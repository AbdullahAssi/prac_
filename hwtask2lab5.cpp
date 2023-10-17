#include<iostream>
using namespace std;
int main(){
	cout<<" 1. CashWithdraw"<<endl;
	cout<<" 2. Account Statment"<<endl;
	cout<<" 3. Fund Transfer"<<endl;
	cout<<" 4. Change Pin"<<endl;
	cout<<" 5. Other Operations\n"<<endl;
	int op;
	cout<<"Enter Your Operation = ";
	cin>>op;
	cout<<"\n";
	switch(op)
		{
			case 1:
				cout<<"\t\tCashWithdraw"<<endl;
				cout<<"\tPLease Enter Your amount to withdraw:";
				break;
			case 2:
				cout<<"\t\t Account Statment"<<endl;
				cout<<"\tThis is your account statment";
				break;
			case 3:
				cout<<"\t\tFund Transfer"<<endl;
				cout<<"\tPlease Enter The amount of Funds:";
				break;
			case 4:
				cout<<"\t\tChange Pin"<<endl;
				cout<<"\tEnter Your OTP to verify:";
				break;
			case 5:
				cout<<"\t\tOther Operations"<<endl;
				cout<<"\tHere is the list of other Operations";
				break;
			default:
				cout<<"Invalid Value!";
				break;
		}
	return 0;
}
