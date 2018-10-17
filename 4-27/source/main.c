#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int a, b, c;
	for (a = 1; a < 501; a++) {
		for (b = 1; b < 501; b++) {
			for (c= 1; c < 501; c++) {
				if (pow(a, 2)==pow(b,2) + pow(c,2))   {
					printf("a=%d,b=%d,c=%d\n", a, b, c);
				}

			}
		}
	}
	system("pause");
	return 0;
}
