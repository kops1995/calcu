#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int a, b;
	int sum = 0;
	
	printf("�� ���� ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);

	sum = a + b;

	printf("�Է��Ͻ� �� ���� ������ ���� %d �Դϴ�.\n", sum);

	system("pause");
	return 0;
}