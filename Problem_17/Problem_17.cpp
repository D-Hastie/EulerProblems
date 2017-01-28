#include<iostream>
#include <math.h>
#include <stdio.h>
#include<cmath>
#include<gmp.h>
#include<gmpxx.h>
using namespace std;

int main()
{
	int letternum, reduction, newk;
	long lettersum;
	int k = 0;
	int i =0;
	int j =1000;
	lettersum = 0;
	letternum =0;
	while (i != (j+1))
	{	
		k = i;
		
	if (k==1000)
		letternum +=11;
	
	if ((k >=900) && (k < 1000))
	{	
		newk = k % 100;	
		if (newk==0)
		{
			letternum += 11;
		}
		if (newk != 0)
		{
			letternum += 14;
		}
		cout << " new k value: " << newk <<" -- ";
		k = newk;
	}
	
	if ((k >=700) && (k < 900))
	{	
		newk = k % 100;	
		if (newk==0)
		{
			letternum += 12;
		}
		if (newk != 0)
		{
			letternum += 15;
		}
		cout << " new k value: " << newk <<" -- ";
		k = newk;
	}
	
	if ((k >=600) && (k < 700))
	{	
		newk = k % 100;	
		if (newk==0)
		{
			letternum += 10;
		}
		if (newk != 0)
		{
			letternum += 13;
		}
		newk = k % 100;	
		cout << " new k value: " << newk <<" -- ";
		k = newk;
	}
	
	if ((k >=400) && (k < 600))
	{	
		newk = k % 100;	
		if (newk==0)
		{
			letternum += 11;
		}
		if (newk != 0)
		{
			letternum += 14;
		}
		cout << " new k value: " << newk <<" -- ";
		k = newk;
	}
	
	if ((k >=300) && (k < 400))
	{	
		newk = k % 100;	
		if (newk==0)
		{
			letternum += 12;
		}
		if (newk != 0)
		{
			letternum += 15;
		}
		cout << " new k value: " << newk <<" -- ";
		k = newk;
	}
	
	if ((k >=100) && (k < 300))
	{	
		newk = k % 100;	
		if (newk==0)
		{
			letternum += 10;
		}
		if (newk != 0)
		{
			letternum += 13;
		}
		cout << " new k value: " << newk <<" -- ";
		k = newk;
	}
	
	if ((k >=80) && (k < 100))
	{	
		letternum += 6;
		newk = k % 10;
		cout << " new k value: " << newk <<" -- ";
		k = newk;
	}
	
	if ((k >=70) && (k < 80))
	{	
		letternum += 7;
		newk = k % 10;
		cout << " new k value: " << newk <<" -- ";
		k = newk;
	}
	
	if ((k >=40) && (k < 70))
	{	
		letternum += 5;
		newk = k % 10;
		cout << " new k value: " << newk <<" -- ";
		k = newk;
	}
	
	if ((k >=20) && (k < 40))
	{	
		letternum += 6;
		newk = k % 10;
		cout << " new k value : " << newk <<" -- ";
		k = newk;
	}
	// if (k == 0)
		// letternum = letternum;
	if (k==0)
	letternum += 0;
	if (k == 1)
		letternum += 3;
	if (k == 2)
		letternum += 3;
	if (k == 3)
		letternum += 5;
	if (k == 4)
		letternum += 4;
	if (k == 5)
		letternum += 4;
	if (k == 6)
		letternum += 3;
	if (k == 7)
		letternum += 5;
	if (k == 8)
		letternum += 5;
	if (k == 9)
		letternum += 4;
	if (k == 10)
		letternum += 3;
	if (k == 11)
		letternum += 6;
	if (k == 12)
		letternum += 6;
	if (k == 13)
		letternum += 8;
	if (k == 14)
		letternum += 8;
	if (k == 15)
		letternum += 7;
	if (k == 16)
		letternum += 7;
	if (k == 17)
		letternum += 9;
	if (k == 18)
		letternum += 8;
	if (k == 19) 
		letternum += 8;
	
	
	lettersum = lettersum + letternum;
	letternum = 0;
	cout << "Count: " << i << " -- Letter-sum: " << lettersum << endl;
	i = i + 1;
}
}