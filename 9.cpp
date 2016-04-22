#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

void find_and_insert(forward_list<string> &list, string const& to_find, string const& to_add)
{
    auto prev = list.before_begin();
    for (auto curr = list.begin(); curr != list.end(); prev = curr++)
    {
        if (*curr == to_find)
        {
            list.insert_after(curr, to_add);
            return;
        }
    }
    list.insert_after(prev, to_add);
}

int main()
{
	vector <int> a={1,2,3,4,5};
	int b=6;
	vector <int>::iterator o,cb=a.begin(),ce=a.end();
	bool out=false;
	while(cb!=ce)
	{
		if (*cb==b)
		{
			out=true;

		}
		++cb;
	}
	cout << out << endl;
	list<int> my1{1,2,3};
	list<char*> seq1{"I","Love","You"};
	vector<string> seq2;
	seq2.assign(seq1.cbegin(),seq1.cend());
	vector<double> my2(my1.begin(),my1.end());
	for (auto &u:my2)
		cout << u << " ";
	cout <<endl;
	for(auto &u : seq2)
		cout << u << " ";
	cout << endl;
	list<int> num1{1,2,3,4,5,6,7,8,9};
	deque num2,num3;
	for(auto &u : num1)
	{
		//for (auto i : l) (i & 0x1 ? odd : even).push_back(i);
		if (u%2==0)
			num2.push_back(u);
		else
			num3.push_back(u);
	}
	string line;
	deque<string> seq3;
	while(cin >> line)
		seq3.push_back(line);
	for(auto &u : seq3)
		cout << u << " ";
	cout << endl;
	return 0;
}
