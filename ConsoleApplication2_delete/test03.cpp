struct sample {
	sample()
		: p{}
	{
	}
	char* p;
	void Allocate(size_t n)
	{
		delete[] p;
		p = new char[n];
	}
	void Clear()
	{
		delete[] p;
		p = nullptr;
	}
};
int main()
{
	sample x;
	x.Allocate(10);
	x.Allocate(500);
	x.Clear();
}
