#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int a, b;
	int sum = 0;
	int sub = 0;

	printf("�� ���� ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);

	sum = a + b;
	sub = a - b;

	printf("�Է��Ͻ� �� ���� ������ ���� %d �Դϴ�.\n", sum);
	printf("�Է��Ͻ� �� ���� ������ ���� %d �Դϴ�.\n", sub);

	system("pause");
	return 0;
}