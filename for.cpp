 #include<iostream>
 using namespace std;
 int main()
 {
	int num, num1;
	cout << "Enter a number: ";
  	cin >> num;
  	int factorial = 1;
    for (int i = 1; i <= num; i++) 
	{
     factorial *= i;
    }
  cout << "Factorial of " << num << " using a for loop: " << factorial << endl;
  for ( num1 = 0; num != (int)(num1 * num1);) {
		if (num > num1 * num1)
    	num1 = num1 + 0.001; 
	else if (num < num1 * num1)
    	num1 = num1 - 0.001;
}
	cout << "Square root of " << num << " is: " <<num1;
}
