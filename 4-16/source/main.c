#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int i, j;
	printf("(a)\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j <=i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	printf("(b)\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j <10 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	printf("(c)\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j <10; j++) {
			if(j<i) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	printf("\n");

	printf("(d)\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (j < 9 - i) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	printf("\n");

	system("pause");
	return 0;
}