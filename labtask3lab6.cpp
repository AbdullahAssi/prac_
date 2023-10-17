#include <iostream>
using namespace std;

int main()
{
char operation;
int num1, num2;
bool term = true;
while (term)
{
    cout << "Enter the operation you want to perform (+, -, *, /): ";
    cin >> operation;

    if (operation == 'Q' || operation == 'q')
    {
        cout<<"Your Porgram has been terminated";
		term = false;
        break;
    }

    cout << "Enter the First number: ";
    cin >> num1;
    cout<<"Enter The second number: ";
    cin>>num2;
    if (operation == '+')
        cout <<"Your Answer after addition is:"<< num1 + num2 << endl;
    else if (operation == '-')
        cout <<"Your Answer after Substraction is: "<< num1 - num2 << endl;
    else if (operation == '*')
        cout <<"Your Answer after Multiplication is: "<< num1 * num2 << endl;
    else if (operation == '/')
    {
        if (num2 == 0)
            cout << "Division by zero is not allowed." << endl;
        else
            cout <<"Your Answer after Division is : "<< num1 / num2 << endl;
    }
    else
        cout << "Invalid operator" << endl;
}
return 0;
}
