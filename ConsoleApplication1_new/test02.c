struct sample {
	char buf[256];
	int n;
};
#include <stdlib.h>
int main()
{
	struct sample* const q = malloc(sizeof(struct sample));
	if (q) {
		//����������t������
		q->n = 10;


		free(q);
	}
	else {
	}

}
