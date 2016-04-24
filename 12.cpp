#include "Chapter12.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>

using namespace std;
void readCin(vector<int>* vec)
{
	int num;
	while(cin >> num)
	{
		vec->push_back(num);
	}
	//return new vector<string> vec;
}
void printSeq(vector<int>* vec)
{
	for (auto &u : *vec)
		cout << u << " ";
	cout << endl;
	delete vec;
}
void readCin1(shared_ptr<vector<int>> vec1)
{
	int num;
	while(cin >> num)
		vec1->push_back(num);
}
void printSeq1(shared_ptr<vector<int>> vec1)
{
	for (auto &u : *vec1)
		cout << u <<endl;
}
void input_reverse_output_string(int n)
{
    std::allocator<std::string> alloc;
    auto const p = alloc.allocate(n);
    std::string s;
    auto q = p;
    while (std::cin >> s && q != p + n) alloc.construct(q++, s);

    while (q != p) {
        std::cout << *--q << " ";
        alloc.destroy(q);
    }
    alloc.deallocate(p, n);
}
int main()
{
    const StrBlob csb{"hello", "world", "pezy"};
    StrBlob sb{"hello", "world", "Mooophy"};

    std::cout << csb.front() << " " << csb.back() << std::endl;
    sb.back() = "pezy";
    std::cout << sb.front() << " " << sb.back() << std::endl;
    /*
    vector<int> *vec= new vector<int>();
    readCin(vec);
    printSeq(vec);
    *
    shared_ptr<vector<int>> vec1=make_shared<vector<int>>();
    readCin1(vec1);
    printSeq1(vec1);
    */
    char *seq1="Shanghai Jiaotong University. ";
    char *seq2="Shanhai, China."
    //char *seq3=new char [300];
    char* concatenate_string = new char[255]();
    strcat(concatenate_string, "hello ");
    strcat(concatenate_string, "world");
    std::cout << concatenate_string << std::endl;
    delete[] concatenate_string;

    // std::string
    std::string str1{"hello "}, str2{"world"};
    std::cout << str1 + str2 << std::endl;
   // unique_ptr<char []> seq3(new char[300]);
   
    return 0;
}
