#include<stdio.h>
#include<stdlib.h>

int main(void) {
	 float r,i,p,d;

	printf("Enter loan principal(-1 to end):");
	scanf_s("%f", &p);
	if (p == -1) { system("pause"); return 0; }
	printf("Enter interest rate:");
	scanf_s("%f", &r);
	printf("Enter term of the loan in day:");
	scanf_s("%f", &d);

	i = p * r*d / 365;
	printf("the interest charge is %.2f", i);

	system("pause");
	return 0;
}