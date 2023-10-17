#include<iostream>
using namespace std;
int main(){
	int GPA;
	cout<<"Enter Your GPA =";
	cin>>GPA;
	if(GPA >=3.9 && GPA <=4.0)
	{
	
		cout << "Dean's Honor List. " << endl;
	}
	else 
	{
		if (GPA >=2.0 && GPA<=3.8)
		cout<<"   ";
		else{
		cout << "Current GPA below graduation requirement. ";
		cout<< "\nSee your academic advisor." << endl;
		}
	}			
}
