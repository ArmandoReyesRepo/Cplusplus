#include <iostream> 
using namespace std; 
 
int main() 
{ 
  int num; 
 
  do 
  { 
    cout << "Enter a number (100 to stop): "; 
    cin >> num; 
  } 
  while(num != 100); 
  system ("pause");
  return 0; 
}
