#include <iostream>
struct sample {
	sample()
		: buf{}
		, n  {}
	{
		std::cout << this << ": �R���X�g���N�^���Ăяo����܂����B\n";
	}
	~sample()
	{
		std::cout << this << ": �f�X�g���N�^���Ăяo����܂����B\n";
	}
	char buf[256];
	int  n       ;
};
int main()
{
	const auto p = new sample[2];
	p[0].n = 10;
	p[1].n = 20;
	delete[] p;
}
