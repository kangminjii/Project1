#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q4. int�� num1, num2�� ����� ���ÿ� 10�� 20���� �ʱ�ȭ���ְ�,
	int �� ������ ptr1, ptr2�� �����ϰ�,
	�� num1�� num2�� �̿��ؼ� num1�� 10����, num2�� 10���� �Ѵ�.
	���� ptr1�� ptr2�� ����Ű�� ����� ���� �ٲ۴�.
	���������� ptr1�� ptr2�� ����Ű�� ������ ������ ����Ѵ�.
	�� ���� num1, num2�� ����ؼ� ����� ���� ������ Ȯ���Ѵ�.
*/

int main()
{
	//int a = 10, b = 15;
	//const int*  pa = &a;
	//int* pb = &b;

	//pa = &a;
	//a = 20;
	//// *pa = 30;  const�϶� ����

	int num1 = 10;
	int num2 = 20;

	int* ptr1 = &num1;
	int* ptr2 = &num2;

	*ptr1 += 10;
	*ptr2 -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("ptr1�� ����Ű�� ���� : %d\n", *ptr1);
	printf("ptr2�� ����Ű�� ���� : %d\n", *ptr2);

	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);


	return 0;
}