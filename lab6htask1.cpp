#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int var;
	int  factorial = 1;
	float sqrt;
	cout << "Enter a number: ";
	cin >> var;
	int i = 1;
	while (i <= var) {
	factorial *= i;
	i++;
	}
		cout << "Factorial of " << var << " is: " << factorial << endl;


	sqrt = sqrt(var);
	cout << "Square root of " << var << " is: " << sqrt << endl;

return 0;
}
