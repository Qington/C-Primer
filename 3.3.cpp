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
	vector<int> v;
	int a;
	while(cin >> a)
		v.push_back(a);
	for (auto c : v)
		cout << c;
	
	vector<string> v1;
	string s1;
	while (cin >> s1)
		v1.push_back(s1);
	for (auto c1 : v1)
		cout << c1;
	*/
	vector<string> v;
	string s;
	while(getline(cin,s))
		v.push_back(s);
	for (auto &c : v)
	{
		for (int i = 0; i < c.size(); i++)
			toupper(c[i]);
	}
	for (auto c1 : v)
		cout << c1 << std::endl;

	return 0;
} 
