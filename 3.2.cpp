#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1,s2;
	/*
	getline(cin,s);
	cout << s << s.size() << endl;
	while (cin >> s)
	cout << s <<endl;
	*
	getline(cin, s1);
	getline(cin, s2);
	if (s1==s2)
		cout << s1 <<endl;
	else if (s1>=s2)
		cout << s1 << endl;
	else 
		cout << s2 << endl;
	if (s1.size()>s2.size())
		cout << s1 << s1.size() << endl;
	else if (s1.size()<s2.size())
		cout << s2 << s2.size() << endl;
	s1+=s2;
	cout << s1 << endl;
	s1=s1+" "+s2;
	cout << s1 << endl;
	*/
	//getline (cin,s1);
	s1="I love you!";
	for(char &c : s1)
		c='X';
	cout << s1 << endl;
	decltype(s1.size()) i = 0;
	while(i < s1.size())
		s1[i]='c';
	cout << s1 << endl;
	return 0;
}
