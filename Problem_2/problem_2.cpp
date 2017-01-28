// my first program in C++
#include <iostream>

long i,j,k,l;

int main()
{
	
	
	i=0;
	j=1;
	k=0;
	l=0;
	do{
		k = i + j;
		i = j;
		j = k;	
		if (k % 2 == 0){l=l+k;}
	}while(k<4000000);
  std::cout << l;
	return 0;
}