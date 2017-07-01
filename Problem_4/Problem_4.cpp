// my first program in C++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
	
long i,j,l;



int main()
{

	long k = 0; 
	long inversenum = 0

	
	for(long i=1; (i<1000); i++)
		for(long j=1; (j<1000); j++){
			k = i * j;
			l = k; 
			while (l > 0)
				inversenum = inversenum + (l%10);
			l = l/10
					
			cout << l << "\n";
	 }
	 
	 
			
			
	/*	for(k=2; k<i; k++)
			for(l=2; l<i; l++)
				for(m=2; m<i; m++)
					for(n=2; n,i; n++)
						{							
							}
*/	
	
							
			return 0;
}
