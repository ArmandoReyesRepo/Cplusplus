// Reverse case using pointer arithmetic. 
#include <iostream> 
#include <cctype> 
using namespace std; 
 
int main() 
{ 
  char *p; 
  char str[80] = "This Is A Test"; 
 
  cout << "Original string: " << str << "\n"; 
 
  p = str; // assign p the address of the start of the array 
 
 
  while(*p) { 
    if(isupper(*p)) 
      *p = tolower(*p); 
    else if(islower(*p)) 
      *p = toupper(*p); 
    p++; 
  } 
 
  cout << "Inverted-case string: " << str; 
  system ("pause");
  return 0; 
}