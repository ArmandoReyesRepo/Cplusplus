#include <iostream> 
using namespace std; 
 
int main() 
{ 
  int *p, num; 
 
  p = &num; 
 
  *p = 100; 
  cout << num << ' '; 
  (*p)++; 
  cout << num << ' '; 
  (*p)--; 
  cout << num << '\n'; 
  system("pause");
  return 0; 
}