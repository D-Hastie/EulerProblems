#include<iostream>
using namespace std;
long long a,b,c,d,i,j;
long long aold = 0;
long long amaxi = 0;

int main()
{
	
	i = 0;
		for(i=2; i<1000000; i++)
		{
			/*a here resets Term count each increment of i*/
			a = 1;
			/* Same with n, set to i so doesn't interfere with i*/
			long long n = i;
			cout << "\n";
			cout << "This is the starting number: "<< n<< " " ;
			/* Collatz Sequence algorithm*/
			while(n!=1)
				{
					if(n%2==0)
					{
						n = n/2;
						cout << n << " ";
						a = a + 1;
					}
					else if(n%2!=0)
					{
						n = (3*n) + 1;
						cout << n << " ";
						a = a + 1;
					}
			/* End of Collatz Sequence statements */
				}
				if(n == 1)
				{
					cout << "Number of Terms: " << a << "\n";
				}	
			/* Storing and finding the max term number*/ 
				if(aold<a)
				{
					aold = a;
					amaxi = i;
				}
		}
		
		
	cout << "Number with max Terms" << amaxi;
}