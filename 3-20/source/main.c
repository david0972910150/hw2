#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float h, r, s;
	printf("Enter # of hours worked(-1 to end):");
	scanf_s("%f", &h);
	printf("Enter # of hourly rate of the worker($00.00):");
	scanf_s("%f", &r);

	if (h > 40) {
		s = (h - 40)*1.5*r + 40 * r;
	}
	else s = h * r;
	printf("salary is %.2f", s);
	system("pause");
	return 0;



}