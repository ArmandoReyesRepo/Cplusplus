// show a table of Earth to Moon weights
#include <iostream>
using namespace std;

int main ()

	{
	
		double earthweight; // weight on earth
		double moonweight;  // weight on moon
		
		int counter;
		
		counter = 0;
		
		for ( earthweight = 1.0; earthweight <= 100.0; earthweight++)
			{ 
			  moonweight = earthweight * 0.17;
			  cout <<   earthweight << " earth-pounds is equivalent to " << 
		      moonweight << " moon-pounds. \n ";
			  counter ++;
			  
			  if ( counter==25)
				{ 
					cout << " \n ";
					counter = 0;
				}
			}
	
		system ("pause");
		return 0;
	}

