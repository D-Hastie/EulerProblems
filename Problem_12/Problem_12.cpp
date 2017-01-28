#include<iostream>
#include<math.h>
using namespace std;

long long i,j,k,l,m;
long long a=0, b;
long long N = 13000;
int M=10;
int main()
{
	m = 0;
	for(l=0; l<N; l++)
	{
		b = 0;
		m = m + l;
		cout << "Number: "<< l<< " Triangularised: "<< m<< " ";
		for(i=1; i<=sqrt(m); i++)
		{
			if(m % i==0)
			{
				b = b + 2;
			}
			
		}
		cout<<"Number of Divisors: "<< b<< "\n";
		if(b >=500)
		{
			break;
			return 0;
		}
	}
		
}