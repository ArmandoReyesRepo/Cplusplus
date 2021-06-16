// A for loop with no increment. 
 
#include <iostream> 
using namespace std; 
 
int main() 
{ 
  int x; 
 
  for(x=0; x != 123; ) { 
    cout << "Enter a number: "; 
    cin >> x; 
  } 
  system ("pause");
  return 0; 
}