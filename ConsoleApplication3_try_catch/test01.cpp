#include <exception>
#include <stdexcept>
#include <iostream>



void g()
{
	//std::runtime_error クラスは std::exception からの派生クラス
	throw std::runtime_error("エラーが発生しました。");
}
void f()
{
	g();
	std::cout << "関数 g を呼び終わりました。\n";
}
int main()
{
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
