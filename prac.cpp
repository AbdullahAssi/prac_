#include<iostream>
#include<math.h>
using namespace std;
int main(){
		string input;
        std::cin >> input;
    int counter;
      int result = 0;
    
    if (input[0] != '-'){
        counter = input.length() - 1;
        
      for (int i = 0; i < input.length(); i++){
        result += pow(10,  counter) * ((int)input[i] - 48);
        counter--;
      }
    }
    
else {
    int counter = input.length() - 2;
    
    for (int i = 0; i < input.length()-1; i++){
          result += pow(10,  counter) * ((int)input[i+1] - 48);
          counter--;
    }
    
    result = result * -1;
}
std::cout << result;
}
		
		
		
		
	
