#include <iostream>

int main()
{
	int i,sum;
	int leftI,rightI;
	// 1.9
	i=50;
	while (i<=100){
		sum+=i;
		++i;
	}
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
	//1.10
	i=100;
	sum=0;
	while (i>=50){
		sum+=i;
		--i;
	}
	std::cout << "Sum of 100 to 50 inclusive is " << sum << std::endl;
	//1.11
	std::cout << "Please input 2 int numbers" << std::endl;
	std::cin >> leftI >> rightI;
	std::cout << "You have input two numbers " << leftI << " " << rightI << "\nThe nembers between them are:  " << std::endl;
	if (leftI>rightI){
		std::swap(leftI,rightI);
	}
	i=leftI;
	while(i<=rightI){
		std::cout << i << " ";
		++i;
	}
	std::cout << std::endl;
	int sum=0, value=0;
 	while (std::cin >> value){
 		sum+=value;
 	}
 	std::cout << sum << std::endl;
	return 0;
}
