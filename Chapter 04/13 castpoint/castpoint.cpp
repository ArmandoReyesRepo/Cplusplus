// This program will not work right. 
#include <iostream> 
using namespace std; 
 
int main() 
{ 
  double x, y; 
  int *p;  
 
  x = 123.23; 
  p = (int *) &x; // use cast to assign double * to int * 
 
  y = *p;    // What will this do? 
  cout << y; // What will this print? 
  system ("pause");
  return 0; 
}