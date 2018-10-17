#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a,b,c,money,d,e,g,f;
	printf("選擇模式(1-4)：");
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
		printf("賣出的銷售金額:");
		scanf_s("%d", &e);
		money = e * 0.057 + 250;
		printf("The salary is %d", money);
	}
	if (a == 4) {
		printf("Enter the 生產件數：");
		scanf_s("%d", &f);
		printf("Enter the 單件酬勞：");
		scanf_s("%d", &g);
		money = f * g;
		printf("The salary is %d", money);
	}
	system("pause");
	return 0;

}