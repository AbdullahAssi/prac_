#include <iostream>
using namespace std;
int main()
{
char operation;
int num1, num2;
do
{
    cout << "Enter the operation you want to perform (+, -, *, /): ";
    cin >> operation;

    if (operation == 'Q' || operation == 'q'){
    cout<<"Your Program has been Terminated.";
        break;
	}
    cout << "Enter First number: ";
    cin >> num1;
    cout<<"Enter Second Number: ";
    cin>>num2;

    if (operation == '+')
        cout <<"Your Answer After addition is: "<< num1 + num2 << endl;
    else if (operation == '-')
        cout <<"Your Answer After Substraction is: "<< num1 - num2 << endl;
    else if (operation == '*')
        cout <<"Your Answer After Multiplication is: "<< num1 * num2 << endl;
    else if (operation == '/')
    {
        if (num2 == 0)
            cout << "Division by zero is not allowed." << endl;
        else
            cout <<"Your Answer After Divison is: "<< num1 / num2 << endl;
    }
    else
        cout << "Invalid operator" << endl;
} while (true);

return 0;
}
