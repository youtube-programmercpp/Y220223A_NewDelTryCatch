struct sample {
	char buf[256];
	int n;
};
#include <stdlib.h>
int main()
{
	struct sample* const q = malloc(sizeof(struct sample));
	if (q) {
		//メモリ割り付け成功
		q->n = 10;


		free(q);
	}
	else {
	}

}
