#include <iostream>
using namespace std;
int main(){
    
    //array of input numbers
    int num_array[15] = {0};
    
    //evaluated arrays
    int c_num[] = {};
    int p_num[] = {};
    
    for(int i = 0; i < 15; i++){
        
        //store input
        cout << "Enter num " << i+1 << ": ";
        cin >> num_array[i];
        
    }
    
    //extract required arrays
    for (int i = 0; i < 15; i++){
        
        int divisor = 2;
        int counter = 1;
        
        //checks for number of divisors
        while (num_array[i] >= divisor){
            
            if((num_array[i] % divisor) == 0)
                counter++;
            
            divisor++;
            
        }
        
        //if num is completely divisible by 2 ints, it is prime
        if(counter == 2)        
            p_num[i] = num_array[i];
        
        //else its a composite num
        else if (divisor != 1 && counter != 1)
            c_num[i] = num_array[i];
            
    }
    
    //print prime numbers
    cout << "Prime nums: ";
    for(int i = 0; i < 15; i++){
        
        if(p_num[i] != 0)
            cout << p_num[i] << ", ";
        
    }
    
        cout << endl;
    
    //print Composite numbers
    cout << "Composite: ";
    for(int i = 0; i < 15; i++){
        
        if(c_num[i] != 0)
            cout << c_num[i] << ", ";
        
    }
    
    return 0;
}
