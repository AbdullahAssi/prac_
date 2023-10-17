#include <iostream>
using namespace std;
int main() {
  int num1,num2;
  
  cout << "Enter the first number: ";
  cin >> num1;
  
  cout << "Enter the second number: ";
  cin >> num2;
  
  cout << "Numbers divisible by 7 between " << num1 << " and " << num2 << ":" << endl;
  for (int i =num1; i <= num2; i++) {
    if (i % 7 == 0) {
      cout << i << endl;
    }
  }
  
  cout << "Numbers divisible by 9 between " << num1 << " and " << num2 << ":" << endl;
  for (int i = num1; i <= num2; i++) {
    if (i % 9 == 0) {
      cout << i << endl;
    }
  }
  
  cout << "Numbers divisible by 13 between " << num1 << " and " << num2 << ":" << endl;
  for (int i = num1; i <= num2; i++) {
    if (i % 13 == 0) {
      cout << i << endl;
    }
  }
  
  return 0;
}

