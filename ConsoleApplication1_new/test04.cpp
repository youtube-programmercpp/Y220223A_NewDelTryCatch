#include <new>
#include <iostream>
struct sample {
	sample()
		: n{}
	{
		std::cout << __FUNCTION__ "\n";
	}
	~sample()
	{
		std::cout << __FUNCTION__ "\n";
	}
	int n;
};
int main()
{
	char buf[sizeof(sample)];
	const auto p = new(buf) sample;
	p->n = 100;
}
