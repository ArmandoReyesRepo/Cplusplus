/* 
   This program displays all printable characters, 
   including the extended character set, if one exists. 
*/ 
 
#include <iostream> 
using namespace std; 
 
int main() 
{ 
  unsigned char ch; 
  
  ch = 32;   
  while(ch)  // testing that the value is not zero ( true ) after value is 
  // 255 then ch is zero (false) and while condition end
  { 
    cout << ch; 
    ch++; 
  } 
  system ("pause");
  return 0; 
}