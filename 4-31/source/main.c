#include<stdio.h>
#include<stdlib.h>


int main(void) {
	int i, j;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (i == 0 || i == 8) {
				if (j == 4)  printf("*");
				else printf(" ");
			}
			else if (i == 1 || i == 7) {
				if (j == 4 || j == 5 || j == 3) printf("*");
				else printf(" ");
			}
			else if (i == 3 || i == 5) {
				if (j == 0 || j == 8) printf(" ");
				else printf("*");
			}
			else if (i == 4) printf("*");
			else {
				if (j == 0 || j == 1 || j == 7 || j == 8) printf(" ");
				else printf("*");
			}

		}
		printf("\n");
	}
	printf("\n");

	system("pause");
	return 0;
}