#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

intmain()
{
	const vector<string> score = {"F","D","C","B","A","A++"};
	usigned int grade=95;
	string lettergrade;
	if (grade < 60)
		lettergrade=score[0];
	else
		lettergrade=score[(grade-50)/10];
	cout << lettergrade << " ";
	lettergrde=(grade<60 ? : score[0],score[(grade-50)/10]);
	cout << lettergrade << endl;

	

}
