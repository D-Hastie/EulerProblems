#include <iostream>

int main()
{
	long i,j,k,l,m;
		i = 0;
		j = 0;
		k = 0;
		l = 0;
		m = 0;
		
	for(i = 1; i<101; i++){
		j += i;
		k += i*i;
	}
	l = j*j;
	m = l - k;
		std::cout<< l<< " - "<< k<<" = "<< m;
		
		
	
	
	
	
	
	
	
	
	
	
}