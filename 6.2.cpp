
#include <iostream>
#include "Chapter6.h"

double square(double x)
{
	return x*x;
}
int main()
{
	double i=4.5;
	double j=square(i);
	std::cout << j << " " << fact(5) << std::endl;
}

int fact(int i)
{
	int j=1;
	if (i==1|i==0)
		j=1;//return 1;
	else
	{
		while (i>1)
		{
			j*=i--;
		}
	}
	return j;
}
