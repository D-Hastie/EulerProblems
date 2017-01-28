#include<iostream>
#include <math.h>
#include <stdio.h>
#include<cmath>
#include<gmp.h>
#include<gmpxx.h>
using namespace std;

int main()
{
	long long sum, remain, i;
	double num = pow(2, 1000);
	printf("%lf\n", num);

	i = num;
	cout << i << endl;
		while(i != 0)
		{
			remain = i % 10;
			sum = sum + remain;
			i = i/10;
		}
	cout << "Sum of digits: " << sum << endl;
}

//
//
// }