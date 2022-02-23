#include <iostream>
struct sample {
	sample()
		: buf{}
		, n  {}
	{
		std::cout << "コンストラクタが呼び出されました。\n";
	}
	~sample()
	{
		std::cout << "デストラクタが呼び出されました。\n";
	}
	char buf[256];
	int  n       ;
};
#include <stdlib.h>
#include <new>
int main()
{
	//C++11
	const auto p = new sample;//オブジェクトを作る...失敗すると std::bad_alloc 例外が投入される
	p->n = 10;
	if (const auto q = static_cast<sample*>(malloc(sizeof(sample)))) {//領域を確保する
		q->n = 10;
		free(q);
	}
	delete p;


}
