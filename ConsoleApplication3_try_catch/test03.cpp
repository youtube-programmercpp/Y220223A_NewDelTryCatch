#include <stdexcept>
#include <iostream>


void g(char* p)
{
	//std::runtime_error �N���X�� std::exception ����̔h���N���X
	throw std::runtime_error("�G���[���������܂����B");
}
#include <memory>
void f()
{
	const auto p = std::unique_ptr<char[]>(new char[512]);
	g(p.get());
}
#include <crtdbg.h>
int main()
{
	_CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_LEAK_CHECK_DF);
	try {
		//try �u���b�N
		//
		f();
	}
	catch (const std::exception& e) {
		//�ߑ�(catch)�����
		std::cout << e.what() << '\n';
	}
}
