#include <iostream>
struct sample {
	sample()
	{
		std::cout << "コンストラクタが呼び出されました。\n";
	}
	~sample()
	{
		std::cout << "デストラクタが呼び出されました。\n";
	}
	int n;
};
void Delete(sample* p)
{
	delete [] p;
}
int main()
{
	const auto p = new sample[2];
	Delete(p);
}
