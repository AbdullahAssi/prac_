#include <iostream>
using namespace std;
int main() {
 	int num1,num2;

 	cout << "Enter the first number: ";
 	cin >> num1;

	 cout << "Enter the second number: ";
	 cin >> num2;

 cout << "Numbers divisible by 7 between " << num1 << " and " << num2 << ":" << endl;
 int i = num1;
 do 
  {
   if (i % 7 == 0) {
   cout << i << endl;
  }
   i++;
  }
  while (i <=num2);

  cout << "Numbers divisible by 9 between " << num1 << " and " << num2 << ":" << endl;
  i = num1;
 do 
  {
   if (i % 9 == 0) {
   cout << i << endl;
  }
   i++;
  }
  while (i <= num2);

  cout << "Numbers divisible by 13 between " << num1 << " and " << num2 << ":" << endl;
  i = num1;
  do
  {
   if (i % 13 == 0) {
   cout << i << endl;
  }
   i++;
  } 
  while (i <= num2);

  return 0;
}

