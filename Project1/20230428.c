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


// #6 ��������
/*
Q1. ����ڷκ��� ���� 3���� �Է� �޾� �� a,b,c�� ������ �ϰ� ���ǿ����ڸ� �̿��Ͽ� 
	�� ������ �߿� ���� ū ���� ���� ����ϴ� ���α׷��� �ۼ��϶�.
*/
	
	/*int a, b, c, res;

	printf("���� 3���� �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c);
	
	res = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

	printf("�� ������ �� ���� ū ���� : %d\n", res);*/


// #7 ��Ʈ ������

	//int a = 10, b = 12;
	//
	//printf("a & b : %d\n", a & b); // 8
	//printf("a ^ b : %d\n", a ^ b); // 6
	//printf("a | b : %d\n", a | b); // 14
	//printf("~a : %d\n", ~a); // -11
	//printf("a << 1 : %d\n", a << 1); // 20
	//printf("a >> 2 : %d\n", a >> 2); // 2


// #8 ���ǹ� if

	/*int a = 0, b = 0;

	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}
	
	printf("b: %d\n", b);*/


// #9 ��������
/*
Q2. �� ���� ������ �Է¹޾� �� ���� ���� ����ϴ� ���α׷��� �ۼ��϶�.
	��, ������ ū ������ ���� ���� ���� �Ѵ�.
	case1. if~else���� �̿��ؼ� �ۼ�
	case2. ���ǿ����ڸ� �̿��ؼ� �ۼ�
*/

	//int a, b, res1, res2;
	//printf("�� ���� ������ �Է����ּ��� : ");
	//scanf("%d %d", &a, &b);

	//// case1
	//if (a > b)
	//{
	//	res1 = a - b;
	//	printf("case1�� �� ���� ���� %d�Դϴ�.\n", res1);
	//}
	//else
	//{
	//	res1 = b - a;
	//	printf("case1�� �� ���� ���� %d�Դϴ�.\n", res1);
	//}

	//// case2
	//res2 = (a > b) ? (a - b) : (b - a);
	//printf("case2�� �� ���� ���� %d�Դϴ�.\n", res2);


// #10 ���ǹ� switch
	
	//int rank = 1, m = 0;

	//switch (rank)
	//{
	//case 1:
	//	m = 300;
	//	break;
	//case 2:
	//	m = 200;
	//	break;
	//case 3:
	//	m = 100;
	//	break;
	//default:
	//	m = 10;
	//	break;
	//}

	//printf("����� m�� ���� %d\n", m);


// #11 ��������
/*
Q3. �л��� ��ü ��� ������ ���� ������ ����ϴ� ���α׷��� �ۼ��϶�.
	������ 90�� �̻� A, ������ 80�� �̻� B, ������ 70�� �̻� C, ������ 60�� �̻� D, �� �̸��� F�� ó���Ѵ�.
	
	���α׷� ����� ����, ����, ������ ������ �Է¹޴´�.
	�� ����� ���ϰ�, �� �򰡱����� �����Ͽ� ������ ������ ����϶�.
*/

	/*int kor, eng, math, ave;
	
	printf("���ʴ�� ����, ����, ���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &kor, &eng, &math);

	ave = (kor + eng + math) / 3;

	if (ave >= 90)
	{
		printf("��� ������ A�Դϴ�.\n");
	}
	else if (80 <= ave && ave < 90)   // �١����� ���ǹ����� &&�����ڴ� ��ȿ������
	{
		printf("��� ������ B�Դϴ�.\n");
	}
	else if (70 <= ave && ave < 80)
	{
		printf("��� ������ C�Դϴ�.\n");
	}
	else if (60 <= ave && ave < 70)
	{
		printf("��� ������ D�Դϴ�.\n");
	}
	else
	{
		printf("��� ������ F�Դϴ�.\n");
	}*/


// #12 �ݺ��� while

	/*int a = 1;

	while (a < 10)
	{
		printf("a = %d\n", a);
		a *= 2;
	}
	*/

// #13 �ݺ��� for

	// int a = 1; // for�� ( )���� ���۵� ��ġ
	//for (int a = 1; a < 10; a *= 2)
	//{
	//	printf("%d\n", a);
	//	// a *= 2; // for�� ( )���� ���۵� ��ġ
	//}


// #14
/*
Q4. Factorial ���, � ���� ���� n�� �Է� �޾Ƽ� n!�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

	/*int a;
	int res = 1;
	
	printf("���� ������ �Է����ּ��� : ");
	scanf("%d", &a);

	for (int i = a; i > 0; i--)
	{
		res *= i;
	}

	printf("%d! ���� %d�Դϴ�.\n", a, res);*/


// #15
/*
Q5. �� ���� �Է� �޾� �� �� ���̿� �����ϴ� ������ ���� ���ϴ� ���α׷� �ۼ�
*/
	
	/*int a, b, res = 0;

	printf("�� ���� �Է��� �ּ��� : ");	
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		for (int i = b; i <= a; i++)
		{
			res += i;
		}
	}
	else
	{
		for (int i = a; i <= b; i++)
		{
			res += i;
		}
	}

	printf("�� �� ���̿� �����ϴ� ������ ���� %d �Դϴ�.\n", res);*/


// #16
/*
Q6. ����ڷκ��� ���� ���� M�� N�� �Է� �޾� N�� ��ŭ M�� ����� ����ϴ� ���α׷��� �ۼ��϶�.
	ex) 3 4
	=> 3 6 9 12
*/

	unsigned int M, N, res;

	printf("���� ���� M�� N�� �Է����ּ��� : ");
	scanf("%d %d", &M, &N);

	res = M;
	for (int i = 0; i < N; i++)
	{
		printf("%d ", res);
		res += M;
	}



	return 0;
}