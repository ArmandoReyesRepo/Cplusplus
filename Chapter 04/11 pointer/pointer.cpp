#include <iostream> 
using namespace std; 
 
int main() 
{ 
  int total; 
  int *ptr; 
  int val; 
 
  total = 3200; // assign 3,200 to total 
 
  ptr = &total; // get address of total 
 
  val = *ptr;   // get value at that addres  
 
  cout << "Total is: " << val << '\n'; 
  system ("pause");
  return 0; 
}