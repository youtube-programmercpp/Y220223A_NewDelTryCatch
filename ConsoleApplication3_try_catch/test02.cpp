#include <exception>
#include <stdexcept>
#include <iostream>

#include <string>

std::string g()
{
	//std::runtime_error クラスは std::exception からの派生クラス
	return "エラーが発生しました。";
}
std::string f()
{
	auto s = g();
	std::cout << "関数 g を呼び終わりました。\n";
	return s;
}
int main()
{
	auto s = f();
	std::cout << s << '\n';
}
