#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main() {
	
	int a, b, c;
	int sum = 0;
	int sub = 0;
	int mul = 0;
	int div = 0;
	int rem = 0;
	
	while (1) {

	printf("1. ���� 2. ���� 3. ���� 4. ������(��) 5. ������(������) 6. ���α׷� ����\n");
	printf("----------------------------------------------------------------\n");
	printf("���ϴ� ������ �����Ͻÿ�. ");
	scanf_s("%d", &c);

		switch(c)
		{
		case 1:
			printf("�� ���� ���ڸ� �Է��Ͻÿ�. ");
			scanf_s("%d %d", &a, &b);

			sum = a + b;

			printf("������ ����� %d �Դϴ�.\n", sum);
			Sleep(1500);
			system("cls");
			break;
		case 2:
			printf("�� ���� ���ڸ� �Է��Ͻÿ�. ");
			scanf_s("%d %d", &a, &b);

			sub = a - b;

			printf("������ ����� %d �Դϴ�.\n", sub);
			Sleep(1500);
			system("cls");
			break;
		case 3:
			printf("�� ���� ���ڸ� �Է��Ͻÿ�. ");
			scanf_s("%d %d", &a, &b);

			mul = a * b;

			printf("������ ����� %d �Դϴ�.\n", mul);
			Sleep(1500);
			system("cls");
			break;
		case 4:
			printf("�� ���� ���ڸ� �Է��Ͻÿ�. ");
			scanf_s("%d %d", &a, &b);

			div = a / b;

			printf("������(��)�� ����� %d �Դϴ�.\n", div);
			Sleep(1500);
			system("cls");
			break;
		case 5:
			printf("�� ���� ���ڸ� �Է��Ͻÿ�. ");
			scanf_s("%d %d", &a, &b);

			rem = a % b;

			printf("������(������)�� ����� %d �Դϴ�.\n", rem);
			Sleep(1500);
			system("cls");
			break;
		case 6:
			system("pause");
			return 0;
			break;
		
		default:
			printf("�߸��� ��ȣ�Դϴ�.\n");
			break;
		}
	}
}