#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int a, b;
	int sum = 0;
	int sub = 0;
	int mul = 0;
	int div = 0;
	int rem = 0;

	printf("두 개의 숫자를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);

	sum = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	rem = a % b;

	printf("입력하신 두 개의 숫자의 합은 %d 입니다.\n", sum);
	printf("입력하신 두 개의 숫자의 차는 %d 입니다.\n", sub);
	printf("입력하신 두 개의 숫자의 곱은 %d 입니다.\n", mul);
	if (a > b) {
		printf("입력하신 두 개의 숫자의 몫은 %d 입니다.\n", div);
	}
	printf("입력하신 두 개의 숫자의 나머지는 %d 입니다.\n", rem);

	system("pause");
	return 0;
}