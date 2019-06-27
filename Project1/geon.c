#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int a, b, c;
	int sum = 0;
	int sub = 0;
	int mul = 0;
	int div = 0;
	int rem = 0;
	
	while (1) {
	printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈(몫) 5. 나눗셈(나머지) 6. 프로그램 종료\n");
	printf("----------------------------------------------------------------\n");
	printf("원하는 연산을 선택하시오. ");
	scanf_s("%d", &c);


		switch (c)
		{
		case 1:
			printf("두 개의 숫자를 입력하시오. ");
			scanf_s("%d %d", &a, &b);

			sum = a + b;

			printf("덧셈의 결과는 %d 입니다.\n", sum);
			break;
		case 2:
			printf("두 개의 숫자를 입력하시오. ");
			scanf_s("%d %d", &a, &b);

			sub = a - b;

			printf("뺄셈의 결과는 %d 입니다.\n", sub);
			break;
		case 3:
			printf("두 개의 숫자를 입력하시오. ");
			scanf_s("%d %d", &a, &b);

			mul = a * b;

			printf("곱셈의 결과는 %d 입니다.\n", mul);
			break;
		case 4:
			printf("두 개의 숫자를 입력하시오. ");
			scanf_s("%d %d", &a, &b);

			div = a / b;

			printf("나눗셈(몫)의 결과는 %d 입니다.\n", div);
			break;
		case 5:
			printf("두 개의 숫자를 입력하시오. ");
			scanf_s("%d %d", &a, &b);

			rem = a % b;

			printf("나눗셈(나머지)의 결과는 %d 입니다.\n", rem);
			break;
		case 6:
			system("pause");
			return 0;
			break;
		
		default:
			printf("잘못된 번호입니다.\n");
			break;
		}
	}
	//add 브랜치의 내용
	/*printf("두 개의 숫자를 입력하시오 : ");
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
	*/

	
}