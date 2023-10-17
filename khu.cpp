 #include<iostream>
 using namespace std;
 int main()
 {
	int num,nu1;
	cout << "Enter a number: ";
  	cin >> num;
  	int factorial = 1;
    for (int i = 1; i <= num; i++) 
	{
     factorial *= i;
}
  	cout << "Factorial of " << num << " using a for loop: " << factorial << endl;
  	for ( nu1 = 0; num != (int)(nu1 * nu1);) {
		if (num > nu1 * nu1)
    		nu1 = nu1 + 0.001; 

		else if (num < nu1 * nu1)
    		nu1 = nu1 - 0.001;
	}

	cout << "Square root of " << num << " is: " << nu1;

}
