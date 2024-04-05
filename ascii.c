#include <stdio.h>

int main() {
	for (int i = 32; i < 256; i++) {
		if (i < 100) printf(" ");
		printf("%i %c  ", i, i);
		if ((i + 1) % 16 == 0) printf("\n");
	}
	return 0;
}
