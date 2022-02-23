struct sample {
	char buf[256];
	int n;
};
#include <stdlib.h>
int main()
{
	struct sample* const q = malloc(sizeof(struct sample));
	if (q) {
		//ƒƒ‚ƒŠŠ„‚è•t‚¯¬Œ÷
		q->n = 10;


		free(q);
	}
	else {
	}

}
