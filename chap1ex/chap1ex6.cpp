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
//�ѹ��� 2���� �ܾ �Է��ϸ� ����ձ������� name �������ۿ� ������ �ܾ ����Ǿ� �ѹ��� ����Ǿ�
//�Է��� ù��° �ܾ 10��°�ٿ� cout�Ǿ� ǥ��ǰ� cin�� ��������ʰ�
//�ٷ� 12��°�ٿ��� �Է��� �ι�° �ܾ ������ �������� �������ִ�.