#include <exception>
#include <stdexcept>
#include <iostream>

#include <string>

std::string g()
{
	//std::runtime_error �N���X�� std::exception ����̔h���N���X
	return "�G���[���������܂����B";
}
std::string f()
{
	auto s = g();
	std::cout << "�֐� g ���ĂяI���܂����B\n";
	return s;
}
int main()
{
	auto s = f();
	std::cout << s << '\n';
}
