// Demonstrate dynamic initialization. 
 
#include <iostream> 
using namespace std; 
  
int main() { 
  double radius = 4.0, height = 5.0; 
 
  // dynamically initializ volume 
  double volume = 3.1416 * radius * radius * height; 
 
  cout << "Volume is " << volume;
  cout << "\n"; 
  system ("pause"); 
  
 
  return 0; 
}