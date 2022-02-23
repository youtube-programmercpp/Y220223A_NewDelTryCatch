int main()
{
	if (char* const p = new char[256]) {
		delete[] p;
	}
	p = nullptr;

}
