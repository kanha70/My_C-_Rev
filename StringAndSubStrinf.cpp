#include <iostream>
#include <string>
#define Vu(x) std::cout<<x

int main()
{
	//[](int x) { std::cout << x; };
	//std::string name = "Hi Kanhaiya Lal prajapati";
	
	std::string string1 = "12345678";
	std::string pattern = "7";
	Vu(string1.substr(2,4));

	std::cin.get();
	return 0;
}

