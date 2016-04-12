#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int a[3][4]={0};
	for (const int (&p)[4]:a)
		for(int q: p)
			cout << q << " ";
	cout << endl;
	for(int i=0;i!=3;++i)
		for (int j=0; j!=4;++j)
			cout << a[i][j] << " ";
	cout << endl;
	for(int(*p)[4]=a;p!=(a+3);++p)
		for(int *q=*p;q!=(*p+4);++q)
			cout << *q << " ";
	cout << endl;
	for(size_t i=0;i!=3;++i)
		for(size_t j=0;j!=4;++j)
			cout << a[i][j];
	cout << endl;
	for(const auto &val: a)
		for (auto val1: val)
			cout << val1 << " ";
	cout << endl;
	return 0;
}
