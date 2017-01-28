#include <iostream>

using namespace std;
int a, b, c;
long abresult, cresult;

int main()
{
	
for(a=1; a<500; a++)
	{
		for(b=1; b<600; b++)
		{
			for(c=1; c<999; c++)
				{
					if(a+b+c > 1000)
					{
					break;
					}
					abresult = (a*a)+(b*b);
					cresult = (c*c);
					if((abresult==cresult) && (a+b+c == 1000))
					{
						cout << a*b*c << " ";
					}
						
				}
		}
	}
}