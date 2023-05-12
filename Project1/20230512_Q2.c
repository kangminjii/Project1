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

void Input(Stu s[], int totalStudent);
void Output(Stu s[], int totalStudent);
void Search(Stu s[], int totalStudent);

struct Student
{
	char name[20];
	int ID;
	int grade[3];
	
	struct Student* next; // ���Ķ� ���
};

int main()
{
	int totalStudent = 0, menu = 0;
	
	// �Է�
	printf("�Է� ���� �� �л� ���� �Է��Ͻÿ� : ");
	scanf("%d", &totalStudent);

	// ==================
	Stu s[5]; // totalStudent ��

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

void Input(Stu s[], int totalStudent)
{
	for (int i = 0; i < totalStudent; i++)
	{
		printf("�й� : ");
		scanf("%d", &(s[i].ID));
		getchar();
		printf("�̸� : ");
		gets(s[i].name);
		printf("����, ���� ,���� ���� : ");
		scanf("%d %d %d", &(s[i].grade[0]), &(s[i].grade[1]), &(s[i].grade[2]));
	}
}

void Output(Stu s[], int totalStudent)
{
	// ����, ���, ���� ���
	int* total = (int*)malloc(totalStudent * 3);
	double* average = (double*)malloc(totalStudent * 3);
	char* finalGrade = (char*)malloc(totalStudent * 3);

	for (int i = 0; i < totalStudent; i++)
	{
		total[i] = s[i].grade[0] + s[i].grade[1] + s[i].grade[2];
		average[i] = total[i] / 3;

		if (average[i] >= 90)		finalGrade[i] = 'A';
		else if (average[i] >= 80)	finalGrade[i] = 'B';
		else if (average[i] >= 70)	finalGrade[i] = 'C';
		else 						finalGrade[i] = 'F';
	}

	printf("�й�  �̸�  ���� ���� ����  ����  ���  ����\n");
	printf("==============================================\n");
	for (int i = 0; i < totalStudent; i++)
	{
		printf("%4d %6s %3d  %3d  %3d  %4d   %.1lf %3c\n", s[i].ID, s[i].name, s[i].grade[0], s[i].grade[1], s[i].grade[2], total[i], average[i], finalGrade[i]);
	}

	//// ����
	//double max = average[0];
	//while (1)
	//{
	//	for (int i = 0; i < totalStudent; i++)
	//	{
	//		if (average[i] > max)
	//		{
	//			max = average[i];
	//			max.next = &average[i];
	//			break;
	//		}
	//	}
	//}

	free(total);
	free(average);
	free(finalGrade);
}

void Search(Stu s[], int totalStudent)
{
	// ����, ���, ���� ���
	int* total = (int*)malloc(totalStudent * 3);
	double* average = (double*)malloc(totalStudent * 3);
	char* finalGrade = (char*)malloc(totalStudent * 3);

	for (int i = 0; i < totalStudent; i++)
	{
		total[i] = s[i].grade[0] + s[i].grade[1] + s[i].grade[2];
		average[i] = total[i] / 3;

		if (average[i] >= 90)		finalGrade[i] = 'A';
		else if (average[i] >= 80)	finalGrade[i] = 'B';
		else if (average[i] >= 70)	finalGrade[i] = 'C';
		else 						finalGrade[i] = 'F';
	}

	char input[20];
	printf("�˻��Ϸ��� �л��� �̸��� �Է����ּ��� : ");
	gets(input);

	for (int i = 0; i < totalStudent; i++)
	{
		if (strcmp(s[i], input) == 0)
		{
			printf("%4d %4d %4d %c", s[i].grade[0], s[i].grade[1], s[i].grade[2], finalGrade[i]);
		}
	}

	free(total);
	free(average);
	free(finalGrade);

}

