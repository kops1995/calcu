#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int a, b;
	int sum = 0;
	int sub = 0;
	int mul = 0;
	int div = 0;

	printf("두 개의 숫자를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);

	sum = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;

	printf("입력하신 두 개의 숫자의 합은 %d 입니다.\n", sum);
	printf("입력하신 두 개의 숫자의 차는 %d 입니다.\n", sub);
	printf("입력하신 두 개의 숫자의 곱은 %d 입니다.\n", mul);
	printf("입력하신 두 개의 숫자의 나눔은 %d 입니다.\n", div);

	system("pause");
	return 0;
}