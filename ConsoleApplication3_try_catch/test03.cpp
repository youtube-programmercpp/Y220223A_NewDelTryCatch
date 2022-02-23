#include <stdexcept>
#include <iostream>


void g(char* p)
{
	//std::runtime_error クラスは std::exception からの派生クラス
	throw std::runtime_error("エラーが発生しました。");
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
		//try ブロック
		//
		f();
	}
	catch (const std::exception& e) {
		//捕捉(catch)される
		std::cout << e.what() << '\n';
	}
}
