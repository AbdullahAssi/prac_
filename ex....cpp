#include<iostream>
#include<conio.h>
int main()
{
	std::cout<<"Enter first character of your first name =";
	char x = getche();
	if(x>=97 && x<=122)
	{
		x = x-32;
	std::cout<<"\nEntered Character in upper case ="<<x;
	}
	else{
		x= x+32;
	std::cout<<"\nEnteredCharacter in lower case="<<x;
	}
	std::cout<<"\nEnter first character of your last name =";
	char y = getche();
	
	if(y>=97 && y<=122)
	{
		y = y-32;
	std::cout<<"\nEntered Character in upper case="<<y;
	}
	else{
		y = y+32;
	std::cout<<"\nEntered Character in lower case ="<<y;
	}
	return 0;
}
