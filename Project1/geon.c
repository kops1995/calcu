#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int a, b;
	int sum = 0;
	
	printf("두 개의 숫자를 입력하시오 : ");
	scanf("%d %d", &a, &b);

	sum = a + b;

	printf("입력하신 두 개의 숫자의 합은 %d 입니다.\n", sum);

	return 0;
}