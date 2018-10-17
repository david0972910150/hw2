#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int i, j;
	for (i=0; i < 3; i++) {
		for (j = 0; j < 11; j++) {
			if (i == 1) {
				if (j == 0 || j == 10) printf("+");
				else printf(" ");
			}
			else printf("+");
		}
		printf("\n");
	}
	printf("\n");

	system("pause");
	return 0;
}