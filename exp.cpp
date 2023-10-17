#include<iostream>
#include<conio.h>
int main()
{
	std::cout<<"Enter character =";
	char x = getche();
	if(x>=97 && x<=122)
	{
		x = x-32;
	std::cout<<"Character in upper case ="<<x<<std::endl;
	}
	else{
		x= x+32;
	std::cout<<"Character in lower case="<<x<<std::endl;
	}
	std::cout<<"Enter character =";
	char y = getche();
	
	if(y>=97 && y<=122)
	{
		y = y+32;
	std::cout<<"Character in other ="<<y<<std::endl;
	}
	else{
		y= y-32;
	std::cout<<"Character in ="<<y<<std::endl;
	}
	return 0;
}
