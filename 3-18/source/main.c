#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float m, s;

	printf("Enter sale in dollars(-1 to end):");
	scanf_s("%f", &s);
	if (s == -1) { system("pause");  return 0; }

	m = s * 9 / 100 + 200;



	printf("Salary is %.2f\n", m);

	system("pause");
	return 0;


}