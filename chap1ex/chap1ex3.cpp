//chap1ex3
#include <iostream>
#include <string>

int main()
{
	{
		const std::string s = "a string";
		std::cout << s << std::endl;
	}
	{
		const std::string s = "another string";
		std::cout << s << std::endl;

	}

	return 0;
}
//올바르게 동작합니다