#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q2. p.512 ���� ó�� ���α׷�
	�й�, �̸�, ����(��/��/��)�� �Է� ���� �� �ִ� ����ü�� �����,
	������ ���� �л��� ���� �����͸� �Է� �޾� ����ϴ� ���α׷��� �ۼ��϶�.
	���� 4���� �޴��� �����ϰ�, �� �޴� ���ý� �۵��� ������ ����.
	1. �Է� - �й�, �̸�, ���� ������ �Է�
	2. ��� - ����(���)�� ���� (���ĵ� ���·�) ���
	3. �˻� - �̸����� �ش� �л��� ����, ������ ���
	4. ����
	��, 
		1. ��ȣ �ߺ� �Ұ�, �̸��� �ߺ� ����
		2. �˻� -> �̸� �˻����� �ϰ� ���� ã�� ���� �켱���� ���
		3. �޸� �Ҵ� ���, �ڱ� ���� ����ü Ȱ��,
		   �Է�/ ���/ �˻��� ���� ���� �Լ��� �����Ѵ�. 
*/

typedef struct Student Stu;

void Input(Stu* s, int totalStudent);
void Output(Stu* s, int totalStudent);
void Search(Stu* s, int totalStudent);
void Calculate(Stu* s, int totalStudent);

struct Student
{
	char name[20];
	int ID;
	double grade[3];
	double total;
	double average;
	char finalGrade;
	
	struct Student* next; // ���Ķ� ���
};

int main()
{
	int totalStudent = 0, menu = 0;
	
	// �Է�
	printf("�Է� ���� �� �л� ���� �Է��Ͻÿ� : ");
	scanf("%d", &totalStudent);

	Stu* s = (Stu*)malloc(sizeof(Stu));

	while (menu != 4)
	{
		printf("\n�޴� ���� : 1. �Է� / 2. ��� / 3. �˻� / 4. ����\n");
		scanf("%d", &menu);
		getchar();

		switch (menu)
		{
			case 1: 
				Input(s, totalStudent);
				break;
			case 2:
				Calculate(s, totalStudent);
				Output(s, totalStudent);
				break;
			case 3:
				Search(s, totalStudent);
				break;
			case 4:
				break;
		}
	}
	
	return 0;
}

void Input(Stu* s, int totalStudent)
{
	for (int i = 0; i < totalStudent; i++)
	{
		int check = 0;

		printf("�й� : ");
		scanf("%d", &(s[i].ID));
		for (int j = 0; j < i; j++)
		{
			if (s[i].ID == s[j].ID)
			{
				printf("��ȣ�� �ߺ��˴ϴ�. �ٽ� �Է����ּ���.\n");
				check++;
				break;
			}
		}
		if (check)
		{
			i--;
			continue;
		}
		getchar();

		printf("�̸� : ");
		gets(s[i].name);
		printf("����, ���� ,���� ���� : ");
		scanf("%lf %lf %lf", &(s[i].grade[0]), &(s[i].grade[1]), &(s[i].grade[2]));
		getchar();
	}
}

void Output(Stu* s, int totalStudent)
{
	// �ڱ���������ü�� ���� ����
	//Stu* sort;
	//sort->next = NULL;

	//sort = &s[0];

	//// ����� ū ������� s[] �迭 ����
	//for (int i = 0; i < totalStudent; i++)
	//{
	//	for (int j = i + 1; j < totalStudent; j++)
	//	{
	//		if (s[j].average > s[i].average)
	//		{
	//			sort = &s[j];
	//			s[j].next = &s[i];
	//			s[i].next = &sort;
	//		}
	//	}
	//}

	printf("�й�\t�̸�\t����\t����\t����\t\t����\t���  ����\n");
	printf("=====================================================================\n");
	for (int i = 0; i < totalStudent; i++)
	{
		printf("%4d %6s", s[i].ID, s[i].name);
		printf("\t%.2lf\t%.2lf\t%.2lf", s[i].grade[0], s[i].grade[1], s[i].grade[2]);
		printf("\t\t%.2lf \t%.1lf \t%c\n", s[i].total, s[i].average, s[i].finalGrade);
	}
}

void Search(Stu* s, int totalStudent)
{
	char input[20];
	printf("�˻��Ϸ��� �л��� �̸��� �Է����ּ��� : ");
	gets(input);

	int check = 0;
	for (int i = 0; i < totalStudent; i++)
	{
		if (strcmp(s[i].name, input) == 0)
		{
			printf("�̸� : %s\n", input);
			printf("%.2lf  %.2lf  %.2lf %c\n", s[i].grade[0], s[i].grade[1], s[i].grade[2], s[i].finalGrade);
			check = 1;
		}
	}
	if (!check)	printf("�˻��ϰ��� �ϴ� �л��� �������� �ʽ��ϴ�.\n");
}

void Calculate(Stu* s, int totalStudent)
{
	for (int i = 0; i < totalStudent; i++)
	{
		s[i].total = s[i].grade[0] + s[i].grade[1] + s[i].grade[2];
		s[i].average = (s[i].total) / 3;

		if (s[i].average >= 90)			s[i].finalGrade = 'A';
		else if (s[i].average >= 80)	s[i].finalGrade = 'B';
		else if (s[i].average >= 70)	s[i].finalGrade = 'C';
		else 							s[i].finalGrade = 'F';
	}
}