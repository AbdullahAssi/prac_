#include <iostream>

int main(){

   //vars
  int space;
  int rows;
  int counter;

  //gets rows from user
  std::cin >> rows;

  //if rows are more than 1 then
  if(rows > 1){
    //evaluates no of stars in top row
    counter = (2 * rows) - 2;
  }

  //printer
  for (int i = 0; i < rows; i++){
      //prints initial spaces
      for (int g = 0; g < space; g++)
        std::cout << "  ";
      //prints the row
      for (int j = 0; j < counter; j++){
          std::cout << "* ";
      }

      //go to new line
      std::cout << std::endl;
      
      //do mafs
      if (counter > 2)
        space ++;

      counter -= 2;

      if (counter == 0){
        for (int g = 0; g < space; g++)
        std::cout << "  ";
        
        std::cout << " " << "*";
      }
  }

  return 0;
}
