#include <iostream> 
/* This program shows the difference between  
   signed and unsigned integers. */ 
 
using namespace std; 
 
int main() 
{ 
  short int i; // a signed short integer 
  short unsigned int j; // an unsigned short integer 
 
  j = 60000;  
  i = j; 
  cout << i << " " << j; 
  cout << "\n"; 
  system ("pause");
 
  return 0; 
}