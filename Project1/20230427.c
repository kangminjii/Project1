#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
// #1 �ڷ��� ����
// 
	//unsigned char	alphabet;
	//unsigned int	year, month;
	//float	pi;
	//double  doublePI;

	//alphabet = 'a';  // "" ���ڿ��� ���� ?�� ��µ�
	//year = 2023;
	//pi = 3.14f;
	//doublePI = 3.14f;
	//month = 4;
	//year = month;

	//printf("alphabet = %c\n", alphabet);
	//printf("year = %d\n", year);
	//printf("pi = %.2f\n", pi);
	//printf("doublePI = %.1f\n", doublePI);


// #2 ����

	/*char ch1 = 'A';
	char ch2 = 65;

	printf("���� %c�� �ƽ�Ű �ڵ� �� = %d\n", ch1, ch1);
	printf("�ƽ�Ű �ڵ� ���� %d�� ���� = %c\n", ch2, ch2);*/


// #3 ���
// 
	//unsigned int ua;

	//ua = 4294967295;
	//printf("%d\n", ua);  // -1 --> %d�� ��ȣ ���� ��ȯ
	//ua = -1;
	//printf("%u\n", ua);  // 4294967295 --> %u�� ��ȣ ���� ��ȯ


// #4 �Ǽ���
// 
	//float ft = 1.234567890123456789f;  // warning �޽��� ���ַ��� f�� ���δ�
	//double db = 1.234567890123456789;

	//printf("ft = %.20f\n", ft); // �Ҽ��� 7������ ���
	//printf("db = %.20f\n", db); // �Ҽ��� 15������ ���

	//float aaa = 0.1f;
	//float answer = aaa + aaa + aaa + aaa + aaa + aaa + aaa + aaa + aaa + aaa;
	//printf("aaa�� 10�� ���ϸ�? \n%.7f", answer); 
	//// 1.0000001
	//// --> float���� ����� �� =�� ���� �ʰ� ������ ǥ���Ѵ�


// #5 ���ڿ�
// 
	//char name[128]; // ���ڿ��� ���� �ι���(\0)�� �ڵ����� �߰��Ѵ�
	//// name = "gil" --> ���� �Ұ�
	//strcpy(name, "gil"); // �� �ٸ� ��� strcpy_s(name, 128, "hong")

	//printf("name = %s\n", name);


// #6 ���
// 
	//const double tax_rate = 0.12; // const�� ����� �ʱ�ȭ�� ���ÿ� �����Ѵ�
	//printf("tax_rate = %.3f", tax_rate);


// #7 pg.72 ��������

	/*int kor = 70;
	int eng = 80;
	int mat = 90;

	int tot = kor + eng + mat;
	printf("���� : %d, ���� : %d, ���� : %d\n", kor, eng, mat);
	printf("���� : %d", tot);*/


// #8 ������ �Է�
// 
	//int age;
	//float height;
	//printf("���̿� Ű�� �Է��Ͻÿ� : ");
	//scanf("%d%f", &age, &height);  // scanf�� ��ȯ���� �ִ�
	//printf("���̴� %d, Ű�� %.1f�Դϴ�.\n", age, height);


// #9 ���ڿ� �Է�
// 
	//char grade;
	//char name[128];
	//printf("������ �̸��� �Է��Ͻÿ� : ");
	//scanf("%c%s", &grade, name);
	//printf("%s�� ������ %c�Դϴ�.\n", name, grade);


// #10 ��� ������
// 
	//int a1 = 5.0 / 2; // Ÿ���� �ٸ� �� ���� �������� ����, ���ϴ� ���� �ȳ��� ���� �ִ�
	//int a2 = 5 / 2.0;

	//double b1 = 5.0 / 2;
	//double b2 = 5 / 2.0;

	//printf("a1�� ǥ��: %d, %f\n", a1, a1);
	//printf("a2�� ǥ��: %d, %f\n", a2, a2);
	//printf("b1�� ǥ��: %f, %d\n", b1, b1);
	//printf("b2�� ǥ��: %f, %d\n", b2, b2);


// #11 ���� ������
// 
	//int A = 5, B = 5;
	//int pre, post;

	//printf("�ʱ갪 A = %d, B = %d\n", A, B);

	//pre = (++A) * 3;
	//post = (B++) * 3;

	//printf("���簪 A = %d, B = %d\n", A, B);
	//printf("������ pre�� = %d, ������ post�� = %d\n", pre, post);


// #12 ���� ������

	/*int a = 10, b = 20;
	int res;

	res = a > b;
	printf("a > b  : %d\n", res);
	res = a >= b;
	printf("a >= b : %d\n", res);
	res = a < b;
	printf("a < b  : %d\n", res);
	res = a <= b;
	printf("a <= b : %d\n", res);
	res = a == b;
	printf("a == b : %d\n", res);
	res = a != b;
	printf("a != b : %d\n", res);*/


// #13 pg.97 ��������

	/*double a = 4.0, b = 1.2;

	printf("%.1f + %.1f = %.1f\n", a, b, a + b);
	printf("%.1f - %.1f = %.1f\n", a, b, a - b);
	printf("%.1f * %.1f = %.1f\n", a, b, a * b);
	printf("%.1f / %.1f = %.1f\n", a, b, a / b);


	int math, english;
	double average;

	printf("�� ������ ���� : ");
	scanf("%d %d", &math, &english);
	average = (math + english) / 2.0;

	printf("�� ������ ��� : %.1f\n", average);


	int kor = 3, eng = 5, mat = 4;
	int credits = 0;
	int res = 0;

	double kscore = 3.8, escore = 4.4, mscore = 3.9;
	double grade = 0;

	credits = kor + eng + mat;
	grade = kscore + escore + mscore / 3;
	res = (credits >= 10) && (grade > 4.0);
	printf("����� %d\n", res);*/


// #14 ����
	
	int N = 0;
	int M = 0;

	printf("��Ⱓ ��踦 �Ǽ̳���? ");
	scanf("%d", &N);
	printf("�Ϸ翡 ��Ǿ� �Ǽ̳���? ");
	scanf("%d", &M);

	int nminute = 220 * (N * 365 * M); // ����� ����(��)
	int nhour = nminute / 60;
	int nday = nhour / 24;
	int nyear = nday / 365;
	
	int year1 = nyear % 365; // ����� ����(��)
	int day1 = nday % 365; // ����� ����(��)
	int hour1 = nhour % 24; // ����� ����(�ð�)
	int minute1 = nminute % 60; // ����� ����(��)


	printf("�پ�� ���� : %d�� %d�� %.d�� %d��\n", year1, day1, hour1, minute1);


	int Nminute = 100 * 365 * 24 * 60 - 220 * (N * 365 * M); // ��� ����(��)
	int Nhour = Nminute / 60;
	int Nday = Nhour / 24;
	int Nyear = Nday / 365;

	int year2 = Nyear % 365; // ��� ����(��)
	int day2 = Nday % 365; // ��� ����(��)
	int hour2 = Nhour % 24; // ��� ����(�ð�)
	int minute2 = Nminute % 60; // ��� ����(��)


	printf("��� ���� : %d�� %d�� %d�� %d��\n", year2, day2, hour2, minute2);


	return 0;
}