#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �����ϴ� ������ ���� ũ���� ���� ���ΰ� ������
// ������ Ÿ���� ū �������� �е� ����Ʈ(�޸� ����)�� �Ҵ��
struct profile
{
	int age;
	double height;
};

struct Student
{
	struct profile pf;
	int id;
	double grade;
	char* name;  // �����͸� �� ���� �����ؾ� ��
};


int main()
{
	struct Student yuni = { {25, 160.3}, 1219, 4.5, "minji"}; // �ʱ�ȭ

	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;

	yuni.name = (char*)malloc(10);
	printf("�̸� �Է� : ");
	gets(yuni.name);

	printf("===================\n");
	printf("���� : %d\n", yuni.pf.age);
	printf("Ű : %.1lf\n", yuni.pf.height);
	printf("�й� : %d\n", yuni.id);
	printf("���� : %.1lf\n", yuni.grade);
	printf("�̸� : %s", yuni.name);

	free(yuni.name);



	return 0;
}