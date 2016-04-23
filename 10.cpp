//#pragma GCC diagnostic error "-std=c++11"
//alias g++='g++ -std=c++11'
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;
/*
bool predicate(const std::string& s)
{
    return s.size() >= 5;
}
inline bool compareIsbn(const Sales_data& sd1, const Sales_data& sd2)
{
    return sd1.isbn().size() < sd2.isbn().size();
}
inline bool is_shorter(std::string const& lhs, std::string const& rhs)
{
    return lhs.size() < rhs.size();
}
*/
int main()
{
	vector<int> num{0,1,2,3,4,5,6,7,8,9};
	list<int> num1;
	unique_copy(num.begin(),num.end(),inserter(num1,num1.begin()));
	for(auto &u : num1)
		cout << u << ",";
	cout << endl;
	int a=count(num.begin(),num.end(),7);
	cout << a << endl;
	cout << accumulate(num.begin(),num.end(),0) << endl;
	fill_n(num.begin(),num.size(), 0);
	for (auto &u : num)
		cout << u << " ";
	cout << endl;
	list<string> seq{"China","Shanghai","JiaoTong University","."};
	cout << count(seq.begin(),seq.end(),"China") << endl;
	cout << count_if(seq.begin(),seq.end(),[](string &a) {return a.size() >6;}) << endl;
	return 0;
}
