#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
// #1 �� ��ȯ ������

	/*int a = 20, b = 3;
	double res = (double)a / (double)b;
	printf("a = %d, b = %d\n", a, b);  // 6.7
	printf("a/b�� ��� : %.1f\n", res); // 6

	a = (int)res;
	printf("(int) %.1f�� ��� : %d\n", res, a);*/


// #2 �ڷ��� ũ�� Ȯ��

	//printf("%d\n", sizeof(int)); // 4
	//printf("%d\n", sizeof(double)); // 8


// #3 ���մ��� ������

	/*int a = 10, b = 20, res = 2;
	
	a += 20;
	res *= b + 10;
	
	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);*/


// #4 �޸� ������

	//int a = 10, b = 20, res;

	//res = (++a, ++b); // 41-42�ٰ� ������ ǥ��
	////++a;
	////res = ++b;
	//
	//printf("a:%d, b:%d\n", a, b);
	//printf("res:%d\n", res);
	

// #5 ���� ������(���� ������)

	/*int a = 10, b = 20;

	printf("ū��: %d\n", (a > b) ? a : b);*/


// #6 Q1.
/*
Q1. ����ڷκ��� ���� 3���� �Է� �޾� �� a,b,c�� ������ �ϰ� ���ǿ����ڸ� �̿��Ͽ� 
	�� ������ �߿� ���� ū ���� ���� ����ϴ� ���α׷��� �ۼ��϶�.
*/
	int a, b, c, res;

	printf("���� 3���� �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c);
	
	res = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

	printf("�� ������ �� ���� ū ���� : %d\n", res);



	return 0;
}