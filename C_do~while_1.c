#include <stdio.h>

int main(void)
{
	int a;
	char b;
	do {
		printf("������ �Է��Ͻÿ�. : ");
		scanf_s("%d", &a);
		getchar();
		printf("����� �Է��� ������ %d�Դϴ�.\n�ٽ� �ϰ� �����ôٸ� r�� �Է��ϼ���.", a);
		scanf_s("%c", &b, sizeof(b));
	} while (b == 'r');

	return 0;

}