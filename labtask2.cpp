#include<iostream>
using namespace std;
int main()
{
int num, start, end, z;
cout<<"Enter a number: ";
cin>>num;
cout<<"Enter the starting range: ";
cin>>start;
cout<<"Enter the ending range: ";
cin>>end;
cout<<"\n\nUsing while loop: "<<endl;
	z=start;
while(z<=end)
{
	cout<<num<<" x "<<z<<" = "<<num*z<<endl;
	z++;
}
	cout<<"\n\nUsing do-while loop: "<<endl;
	z=start;
	do
{
	cout<<num<<" x "<<z<<" = "<<num*z<<endl;
	z++;
}
while(z<=end);
	cout<<"\n\nUsing for loop: "<<endl;
for(z=start; z<=end; z++)
{
	cout<<num<<" x "<<z<<" = "<<num*z<<endl;
}
return 0;
}
