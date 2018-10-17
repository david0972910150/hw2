#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float a, b, c, d, e,m;
	printf("Enter account number(-1 to end):");
	scanf_s("%f", &a);
	if (a == -1) { system("pause");  return 0; }
	printf("Enter beginning balance:");
	scanf_s("%f", &b);
	printf("Enter total charges:");
	scanf_s("%f", &c);
	printf("Enter totral credits:");
	scanf_s("%f", &d);
	printf("Enter credit limit:");
	scanf_s("%f", &e);

	m = b + c - d;
	printf("account: %.2f\n", a);
	printf("credit limit: %.2f\n", e);
	printf("balance: %.2f\n", m);

	if (m > e) printf("credit limit exceeded.\n");


	system("pause");
	return 0;
}