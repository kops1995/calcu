#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int a, b;
	int sum = 0;
	int sub = 0;

	printf("두 개의 숫자를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);

	sum = a + b;
	sub = a - b;

	printf("입력하신 두 개의 숫자의 합은 %d 입니다.\n", sum);
	printf("입력하신 두 개의 숫자의 차는 %d 입니다.\n", sub);

	system("pause");
	return 0;
}