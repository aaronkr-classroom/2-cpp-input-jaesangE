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
// ����x�� ����� �������� ��� ����Ǿ� x�� ��µ��� �����Ƿ� �������� �ʴ´�.