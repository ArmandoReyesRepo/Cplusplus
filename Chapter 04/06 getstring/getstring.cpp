// Using gets() to read a string from the keyboard. 
 
#include <iostream> 
#include <cstdio> 
using namespace std; 
 
int main() 
{ 
  char str[80]; 
 
  cout << "Enter a string: "; 
  gets(str); // read a string using gets() 
  cout << "Here is your string: "; 
  cout << str; 
  system ("pause");
  return 0; 
}