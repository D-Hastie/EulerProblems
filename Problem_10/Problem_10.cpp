#include <iostream>
#include <cmath>

using namespace std;

long i,j,k;
long result;


int main()
{
	result = 5;
	for(i=2; i<2000000; i++)
	{
		for(j=2; j*j<=i; j++)
		{
			if( i % j == 0)
				break;
			else if(j+1 > sqrt(i))
				{
				result = result + i;
				cout << i << endl;
				}	
		}
	}
	cout << result;
}