/* 
   An interactive program that computes 
   the area of a rectangle. 
*/ 
  
#include <iostream>  
using namespace std;  
  
int main()  
{  
  int length,width; // this declares two variables

  
  cout << "Enter the length: "; 
  cin >> length; // input the length 
 
  cout << "Enter the width: "; 
  cin >> width;  // input the width  
  
  cout << "The area is ";  
  cout << length * width; // display the area 
  cout << "\n"; // print a blank line 
  system ("PAUSE");  



  return 0;  
}
