#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
// #1 �ڷ��� ����
	unsigned char	alphabet;
	unsigned int	year, month;
	float	pi;
	double  doublePI;

	alphabet = 'a';  // "" ���ڿ��� ���� ?�� ��µ�
	year = 2023;
	pi = 3.14f;
	doublePI = 3.14f;
	month = 4;
	year = month;

	/*printf("alphabet = %c\n", alphabet);
	printf("year = %d\n", year);
	printf("pi = %.2f\n", pi);
	printf("doublePI = %.1f\n", doublePI);*/


// #2 ����
	char ch1 = 'A';
	char ch2 = 65;

	/*printf("���� %c�� �ƽ�Ű �ڵ� �� = %d\n", ch1, ch1);
	printf("�ƽ�Ű �ڵ� ���� %d�� ���� = %c\n", ch2, ch2);*/


// #3 ���
	unsigned int a;

	a = 4294967295;
	//printf("%d\n", a);  // -1 --> %d�� ��ȣ ���� ��ȯ
	a = -1;
	//printf("%u\n", a);  // 4294967295 --> %u�� ��ȣ ���� ��ȯ


// #4 �Ǽ���
	float ft = 1.234567890123456789f;  // warning �޽��� ���ַ��� f�� ���δ�
	double db = 1.234567890123456789;

	//printf("ft = %.20f\n", ft); // �Ҽ��� 7������ ���
	//printf("db = %.20f\n", db); // �Ҽ��� 15������ ���

	float aaa = 0.1f;
	float answer = aaa + aaa + aaa + aaa + aaa + aaa + aaa + aaa + aaa + aaa;
	//printf("aaa�� 10�� ���ϸ�? \n%.7f", answer); 
	// 1.0000001
	// --> float���� ����� �� =�� ���� �ʰ� ������ ǥ���Ѵ�


// #5 ���ڿ�
	char name[128]; // ���ڿ��� ���� �ι���(\0)�� �ڵ����� �߰��Ѵ�
	// name = "gil" --> ���� �Ұ�
	strcpy(name, "gil"); // �� �ٸ� ��� strcpy_s(name, 128, "hong")

	//printf("name = %s\n", name);

	
// #6 ���
	const double tax_rate = 0.12; // const�� ����� �ʱ�ȭ�� ���ÿ� �����Ѵ�
	//printf("tax_rate = %.3f", tax_rate);


// #7 pg.72 ��������
	int kor = 70;
	int eng = 80;
	int mat = 90;

	int tot = kor + eng + mat;
	//printf("���� : %d, ���� : %d, ���� : %d\n", kor, eng, mat);
	//printf("���� : %d", tot);


// #8 ������ �Է�
	int age;
	float height;
	//printf("���̿� Ű�� �Է��Ͻÿ� : ");
	//scanf("%d%f", &age, &height);  // scanf�� ��ȯ���� �ִ�
	//printf("���̴� %d, Ű�� %.1f�Դϴ�.\n", age, height);
	

// #9 ���ڿ� �Է�
	char name2[128];
	printf("�̸��� �Է��Ͻÿ� : ");
	scanf("%s", name);
	printf("�̸��� %s�Դϴ�.\n", name);







	return 0;
}