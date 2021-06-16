/*    
   Use the Pythagorean theorem to find 
   find the length of the hypotenuse 
   given the lengths of the two opposing 
   sides. 
*/ 
 
#include <iostream> 
#include <cmath> 
using namespace std; 
  
int main() 

{    
  double x, y, z; 
 
  x = 5; 
  y = 4; 
 
  z = sqrt(x*x + y*y); 
 
  cout << "Hypotenuse is " << z; 
   cout << "\n"; 
  system ("pause");

  return 0; 
}
