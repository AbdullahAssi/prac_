#include<iostream>
using namespace std;
int main(){
	int val1;
	cout<<"Enter Your value for increment and decrement =";
	cin>>val1;
	cout<<"Value After Pre Increment =";
	val1 = ++ val1 ;
	cout<<val1<<"\n";
	cout<<"Value after Post Increment =";
	val1 = val1 +1;
	cout<<val1<<endl;
	cout<<"Value After Pre Decrement =";
	val1= --val1;
	cout<<val1<<"\n";
	cout<<"Value After Post Decrement decrement =";
	val1 = val1-1;
	cout<<val1;
}
