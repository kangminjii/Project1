//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*
//Q2. p.512 ���� ó�� ���α׷�
//	�й�, �̸�, ����(��/��/��)�� �Է� ���� �� �ִ� ����ü�� �����,
//	������ ���� �л��� ���� �����͸� �Է� �޾� ����ϴ� ���α׷��� �ۼ��϶�.
//	���� 4���� �޴��� �����ϰ�, �� �޴� ���ý� �۵��� ������ ����.
//	1. �Է� - �й�, �̸�, ���� ������ �Է�
//	2. ��� - ����(���)�� ���� (���ĵ� ���·�) ���
//	3. �˻� - �̸����� �ش� �л��� ����, ������ ���
//	4. ����
//	��, 
//		1. ��ȣ �ߺ� �Ұ�, �̸��� �ߺ� ����
//		2. �˻� -> �̸� �˻����� �ϰ� ���� ã�� ���� �켱���� ���
//		3. �޸� �Ҵ� ���, �ڱ� ���� ����ü Ȱ��,
//		   �Է�/ ���/ �˻��� ���� ���� �Լ��� �����Ѵ�. 
//*/
//
//typedef struct Student Stu;
//
//void Input(Stu s[], int totalStudent);
//void Output(Stu s[], int totalStudent);
//void Search(Stu s[], int totalStudent);
//void Calculate(Stu* s[], int totalStudent);
//
//struct Student
//{
//	char name[20];
//	int ID;
//	int grade[3];
//	int total;
//	double average;
//	char finalGrade;
//	
//	struct Student* next; // ���Ķ� ���
//};
//
//int main()
//{
//	int totalStudent = 0, menu = 0;
//	
//	// �Է�
//	printf("�Է� ���� �� �л� ���� �Է��Ͻÿ� : ");
//	scanf("%d", &totalStudent);
//
//	// ==================
//	Stu* s[100]; // totalStudent ��
//
//
//	while (menu != 4)
//	{
//		printf("\n�޴� ���� : 1. �Է� / 2. ��� / 3. �˻� / 4. ����\n");
//		scanf("%d", &menu);
//		getchar();
//
//		switch (menu)
//		{
//			case 1: 
//				Input(s, totalStudent);
//				break;
//			case 2:
//				Output(s, totalStudent);
//				break;
//			case 3:
//				Search(s, totalStudent);
//				break;
//			case 4:
//				break;
//		}
//	}
//	
//	return 0;
//}
//
//void Input(Stu s[], int totalStudent)
//{
//	for (int i = 0; i < totalStudent; i++)
//	{
//		printf("�й� : ");
//		scanf("%d", &(s[i].ID));
//		getchar();
//		printf("�̸� : ");
//		gets(s[i].name);
//		printf("����, ���� ,���� ���� : ");
//		scanf("%d %d %d", &(s[i].grade[0]), &(s[i].grade[1]), &(s[i].grade[2]));
//	}
//}
//
//void Output(Stu s[], int totalStudent)
//{
//	printf("�й�  �̸�  ���� ���� ����  ����  ���  ����\n");
//	printf("==============================================\n");
//	for (int i = 0; i < totalStudent; i++)
//	{
//		printf("%4d %6s %3d  %3d  %3d  %4d   %.1lf %3c\n", s[i].ID, s[i].name, s[i].grade[0], s[i].grade[1], s[i].grade[2], s[i].total, s[i].average, s[i].finalGrade);
//	}
//
//	//// ����
//	//double max = average[0];
//	//while (1)
//	//{
//	//	for (int i = 0; i < totalStudent; i++)
//	//	{
//	//		if (average[i] > max)
//	//		{
//	//			max = average[i];
//	//			max.next = &average[i];
//	//			break;
//	//		}
//	//	}
//	//}
//
//}
//
//// �ȵ�
//void Search(Stu s[], int totalStudent)
//{
//	char input[20];
//	printf("�˻��Ϸ��� �л��� �̸��� �Է����ּ��� : ");
//	gets(input);
//
//	for (int i = 0; i < totalStudent; i++)
//	{
//		if (strcmp(s[i], input) == 0)
//		{
//			printf("%4d %4d %4d %c", s[i].grade[0], s[i].grade[1], s[i].grade[2], s[i].finalGrade);
//		}
//	}
//
//
//}
//
//void Calculate(Stu* s[], int totalStudent)
//{
//	for (int i = 0; i < totalStudent; i++)
//	{
//		s[i].total = s[i].grade[0] + s[i].grade[1] + s[i].grade[2];
//		s[i].average = s[i].total / 3;
//
//		if (s[i].average >= 90)			s[i].finalGrade = 'A';
//		else if (s[i].average >= 80)	s[i].finalGrade = 'B';
//		else if (s[i].average >= 70)	s[i].finalGrade = 'C';
//		else 							s[i].finalGrade = 'F';
//	}
//}
//
