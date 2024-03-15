//chap1ex5
#include <iostream>
#include <string>

int main()
{
	{
		std::string s = "a string";
		{
			std::string x = s + ", really";
			std::cout << s << std::endl;
		}
		std::string << x << std::endl;
	}



	return 0;
}
// 변수x가 선언된 범위에서 벗어나 실행되어 x가 출력되지 않으므로 동작하지 않는다.