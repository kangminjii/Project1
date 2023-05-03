#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*
Q7. ��Ģ������ ���� ���α׷��� �ۼ��϶�.
	��� ���´� ������ ���n.
	ex)
	���ϴ� ������ ���°��ÿ� : 
	(1: ����, 2: ����, 3: ����, 4:������, 0: ����)
	�Է� 
	> 1
	> �� ������ �Է��Ͻÿ� : 00 00
	> ����� 00 �Դϴ�.
*/

void plus(int a, int b);
void minus(int a, int b);
void multiple(int a, int b);
void divide(int a, int b);

int main()
{
	int number, a, b;

	while (1)
	{
		printf("1: ����, 2: ����, 3: ����, 4:������, 0: ����\n");
		scanf("%d", &number);
		
		if (number == 0)	break;

		printf("�� ������ �Է��Ͻÿ� : ");
		scanf("%d %d", &a, &b);
		
		switch (number)
		{
			case 1:
				plus(a, b);
				break;
			case 2:
				minus(a, b);
				break;
			case 3:
				multiple(a, b);
				break;
			case 4:
				divide(a, b);
				break;
			default:
				break;
		}
	}
}

void plus(int a, int b)
{
	printf("����� %d + %d = %d �Դϴ�.\n\n", a, b, a + b);
}

void minus(int a, int b)
{
	printf("����� %d - %d = %d �Դϴ�.\n\n", a, b, a - b);
}

void multiple(int a, int b)
{
	printf("����� %d * %d = %d �Դϴ�.\n\n", a, b, a * b);
}

void divide(int a, int b)
{
	printf("����� %d / %d = %d �Դϴ�.\n\n", a, b, a / b);
}