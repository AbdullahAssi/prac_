 #include<iostream>
 using namespace std;
 int main()
 {
	 int num;
	  cout << "Enter a number: ";
  	cin >> num;
  	float factorial = 1;
  	int i = 1;
  	do {
    factorial *= i;
    i++;
  } 
  while (i <= num);
  	cout << "Factorial of " << num << " is: " << factorial << endl;
  //square root
  	float num1 = 0;

do {
  	if (num > num1 * num1)
    	num1 = num1 + 0.001; 

	else if (num < num1 * num1)
    	num1 = num1 - 0.001;

} 
	while (num != (int)(num1 * num1));

		cout << "Square root of " << num << " is: " << num1;
	 
 
  }
