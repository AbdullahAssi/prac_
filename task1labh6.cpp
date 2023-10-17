#include <iostream>

using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  int factorial = 1;
  int i = 1;
  while (i <= num) {
    factorial *= i;
    i++;
  }
  	cout << "Factorial of " << num << " is : " << factorial << endl;

	float num1 = 0;

	while (num != (int)(num1 * num1)){

	if (num > num1 * num1)
    	num1 = num1 + 0.001; 

else if (num < num1 * num1)
    	num1 = num1 - 0.001;

}

cout << "Square root of " << num << " is: " << num1;

  return 0;
}
