#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <string>
#include "Chapter6.h"
using std::string;

double square(double x)
{
	return x*x;
}
bool Is_uplambda(const string &s);
void To_upstring(string &s);

int main()
{
	double i=4.5;
	double j=square(i);
	string a="I love cpp";
	To_upstring(a);
	std::cout << Is_uplambda(a) << " " << a << std::endl;

	//std::cout << j << " " << a.size() << " " << fact(5) << std::endl;
}

bool Is_uplambda(const string &s)
{
	bool a;
	for (int i=0;i<=s.size();++i){
		if (isupper(s[i]))
			a=1;
	}
	return a;
}
void To_upstring(string &s)
{	
	for (auto &a:s){
		a=tolower(a);
	}
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
