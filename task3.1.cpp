#include<iostream>
using namespace std;
int main(){
		float GPA;
		cout<<"Enter Your GPA =";
		cin>>GPA;
		if (GPA >=2.0)
			if (GPA >=3.9)
			cout << "Dean's Honor List. " << endl;
		else{
			cout<<"  "; //empty according to mam!Any other value can be printed here
			}
			else{
		        cout << "Current GPA below graduation requirement. "
				<< "\nSee your academic advisor." << endl;
			}
}
