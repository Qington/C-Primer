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
	vector<string> text;
	string line;
	while(getline(cin,line))
		text.push_back(line);
	for (auto c=text.cbegin(); c!=text.cend()&&!c->empty();++c)
	{
		for(auto &c1: c)
			c1=toupper(c1);
		cout << c <<std::endl;
	}
	*
	vector<int> v(10,3);
	for(auto o=v.begin();o!=v.end();++o)
		(*o)*=2;
	for(auto value:v)
		cout << value << " ";
	*/
	vector<int> v(11);
	int a;
	while(cin >> a)
		*(v.begin()+(a/10))+=1;
	for (auto c : v)
		cout << c << " ";
	return 0;
}
