#include <iostream>




int main () 		
		
	{
		int k;
		k = 0;
	    for (long i=2; i<107500; i++) 
	    {
	        bool prime=true;
	        for (long j=2; j*j<=i; j++)
	        {
	            if (i % j == 0) 
	            {
	                prime=false;
	                break;    
	            }
	        }   
	        if(prime)
			{
				k = k + 1;
				std::cout << i << " ";	
			}
		if (k ==10001)
			break;	
	    }
		std::cout<<k;
		
	    return 0;
	}