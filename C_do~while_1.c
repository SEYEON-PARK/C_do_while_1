#include <stdio.h>

int main(void)
{
	int a;
	char b;
	do {
		printf("정수를 입력하시오. : ");
		scanf_s("%d", &a);
		getchar();
		printf("당신이 입력한 정수는 %d입니다.\n다시 하고 싶으시다면 r을 입력하세요.", a);
		scanf_s("%c", &b, sizeof(b));
	} while (b == 'r');

	return 0;

}