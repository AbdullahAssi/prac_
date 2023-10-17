#include <iostream>
using namespace std;

int main() {
  int num1, num2;

  // Read in the two numbers
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;

  // For loop
  cout << "Numbers divisible by 7, 9, and 13 between " << num1 << " and " << num2 << " using a for loop:" << endl;
  for (int i = num1; i <= num2; i++) {
    if (i % 7 == 0 || i % 9 == 0 || i % 13 == 0) {
      cout << i << " ";
    }
  }
  cout << endl;

  // While loop
  cout << "Numbers divisible by 7, 9, and 13 between " << num1 << " and " << num2 << " using a while loop:" << endl;
  int i = num1;
  while (i <= num2) {
    if (i % 7 == 0 || i % 9 == 0 || i % 13 == 0) {
      cout << i << " ";
    }
    i++;
  }
  cout << endl;

  // Do-while loop
  cout << "Numbers divisible by 7, 9, and 13 between " << num1 << " and " << num2 << " using a do-while loop:" << endl;
  i = num1;
  do {
    if (i % 7 == 0 || i % 9 == 0 || i % 13 == 0) {
      cout << i << " ";
    }
    i++;
  } while (i <= num2);
  cout << endl;

  return 0;
}

