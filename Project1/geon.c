#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int a, b;
	int sum = 0;
	int sub = 0;
	int mul = 0;
	int div = 0;

	printf("�� ���� ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);

	sum = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;

	printf("�Է��Ͻ� �� ���� ������ ���� %d �Դϴ�.\n", sum);
	printf("�Է��Ͻ� �� ���� ������ ���� %d �Դϴ�.\n", sub);
	printf("�Է��Ͻ� �� ���� ������ ���� %d �Դϴ�.\n", mul);
	printf("�Է��Ͻ� �� ���� ������ ������ %d �Դϴ�.\n", div);

	system("pause");
	return 0;
}