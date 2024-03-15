//chap1ex6
#include<iostream>
#include<string>

int main()
{

	std::cout << "What is your name? ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << std::endl << "And what is yours? ";
	std::cin >> name;
	std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;

	return 0;
}
//한번에 2개의 단어를 입력하면 공백앞까지만을 name 변수버퍼에 각각의 단어가 저장되어 한번에 실행되어
//입력한 첫번째 단어가 10번째줄에 cout되어 표기되고 cin은 실행되지않고
//바로 12번째줄에서 입력한 두번째 단어가 나오는 실행결과를 얻을수있다.