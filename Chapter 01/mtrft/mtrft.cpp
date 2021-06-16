
#include <iostream>
using namespace std;

int main ()

{
  double  m;
  double  f;

  cout << " Enter the length in meters:   ";  // enter length in meters
  cin  >> m;  // read the number of meters

  f =  m / .3048;   // converts feet to meters

  cout << m  << " meters is "  <<  f  <<  " feet.  ";

  return 0;

}