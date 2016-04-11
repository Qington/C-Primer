#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main()
{
	/*
	int a[10],a1[10];
	for(int i=0;i<10;++i)
		a[i]=i;
	for(int i=0;i<10;++i)
		a1[i]=a[i];
	vector<int> v1(10);
	for(auto i=v.begin();i!=v.end();++i)
		(*i)=i-v.begin();
	vexctor<int> v2(v1);
	*
	int a[10];
	for(int *pt=a;pt!=&a[10];++pt)
		*pt=0;
	*/
	int a[5]={1,2,3,4,5};
	vector<int> v(begin(a),end(a));
	return 0;
}
