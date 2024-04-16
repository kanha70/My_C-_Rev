#include <iostream>
inline int NextFabonaaciNum(int& first, int& second)
{
	int next = first + second;
	first = second;
	second = next;
	return next;
}
int main_0()
{
	int size = 10;

	int first = 0, second = 1;

	std::cout << "Fabbonacci series is : " << first <<" " << second<<" ";
		
	for(int i = 2; i < size; ++i)
	{
		std::cout<<" "<<NextFabonaaciNum(first, second);
	}
	std::cin.get();
	return 0;
}