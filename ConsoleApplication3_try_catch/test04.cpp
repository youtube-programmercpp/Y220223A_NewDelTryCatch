#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdexcept>
void f(FILE* fp, int value)
{
	if (value == 0)
		throw std::runtime_error("value ˆø‚«”‚ª 0 ‚Å‚µ‚½B");
	else
		fprintf(fp, "%d\n", value);
}
#include <memory>
int main()
{
	try {
		if (const std::unique_ptr<FILE, decltype(fclose)*> fp = { fopen("test.txt", "w"), fclose }) {
			f(fp.get(), 0);
		}
		//‚±‚ÌêŠ‚Å‚Í fp ‚Í–³‚¢cfcloseÏ‚İ
	}
	catch (const std::exception& e) {
		fprintf(stderr, "%s\n", e.what());
	}
}
