#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a,b,c,money,d,e,g,f;
	printf("��ܼҦ�(1-4)�G");
	scanf_s("%d", &a);
	if(a==1){
		printf("Enter the salary:");
		scanf_s("%d", &b);
		printf("salary is %d\n", b);
	}
	if (a == 2) {
		printf("Enter the hour of working :");
		scanf_s("%d", &c);
		printf("Enter the hour of money : ");
		scanf_s("%d", &d);
		if (c > 40) {
			money = (c - 40)*1.5*d + 40 * d;
			printf("The money is %d", money);
		}
		else {
			money = c * d;
			printf("The salary is %d\n", money);
		}
	}
	if (a == 3) {
		printf("��X���P����B:");
		scanf_s("%d", &e);
		money = e * 0.057 + 250;
		printf("The salary is %d", money);
	}
	if (a == 4) {
		printf("Enter the �Ͳ���ơG");
		scanf_s("%d", &f);
		printf("Enter the ���S�ҡG");
		scanf_s("%d", &g);
		money = f * g;
		printf("The salary is %d", money);
	}
	system("pause");
	return 0;

}