#include "Chapter6.h"

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
