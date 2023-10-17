#include <iostream>
using namespace std;
int main(){

  int space = 1;
  int rows,ast;
  cout << "Enter number of rows:";
  cin >> rows;

  if(rows > 1){
    ast = (2 * rows) - 2;
  }
  else{
  	cout<<"Invalid value!";
  }

  for (int i = 0; i < rows; i++){
      for (int g = 0; g < space; g++)
        cout << "  ";
      for (int j = 0; j < ast; j++){
          cout << "* ";
      }

      cout<<endl;
      
      if ( ast > 2)
        space ++;

      ast -= 2;
      if (ast == 0){
        for (int g = 0; g < space; g++)
		cout << "  ";
        cout << " " << "*";
      }
     
  }
  return 0;
}
