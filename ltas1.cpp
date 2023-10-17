#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	cout << setw(25) << "Data types" << setw(30) << "Range\n\n";
	cout << setw(25) << "Integer" << setw(30) << "-2147483648 to 2147483647\n";
	cout << setw(25) << "Short Integer" << setw(30) << "-32768 to 32767\n";
	cout << setw(25) << "Long Integer" << setw(30) << "-2147483648 to 2147483647\n";
	cout << setw(25) << "Floating Decimal Number" << setw(30) << "1.17549e-038 to 3.40282e+038\n";
	cout << setw(25) << "Double Decimal Number" << setw(30) <<"2.22507e-308 to 1.79769e+308\n";
	cout << setw(25) << "Long Decimal Number" << setw(30) << "2.22507e-308 to 1.79769e+308\n";
	cout << setw(25) << "Character" << setw(30) << "-128 to 127\n";
	cout << setw(25) << "Unsigned Integer" << setw(38) << "0 to 4294967295\n";
	cout << setw(25) << "Unsigned Short Integer" << setw(30) << "0 to 65535\n";
	cout << setw(25) << "Unsigned Long Integer" << setw(30) << "0 to 4294967295\n";
	cout << setw(25) << "Unsigned Character" << setw(30) << "0 to 255\n";
	cout << setw(25) << "Bool" << setw(30) << "True = 1 and False = 0\n";
}
