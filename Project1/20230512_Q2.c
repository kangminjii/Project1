//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*
//Q2. p.512 성적 처리 프로그램
//	학번, 이름, 학점(국/영/수)을 입력 받을 수 있는 구조체를 만들고,
//	임의의 수의 학생에 대한 데이터를 입력 받아 출력하는 프로그램을 작성하라.
//	다음 4개의 메뉴를 구성하고, 각 메뉴 선택시 작동은 다음과 같다.
//	1. 입력 - 학번, 이름, 성적 순으로 입력
//	2. 출력 - 성적(평균)에 따라 (정렬된 형태로) 출력
//	3. 검색 - 이름으로 해당 학생의 학점, 성적을 출력
//	4. 종료
//	단, 
//		1. 번호 중복 불가, 이름은 중복 가능
//		2. 검색 -> 이름 검색으로 하고 먼저 찾은 것을 우선으로 출력
//		3. 메모리 할당 사용, 자기 참조 구조체 활용,
//		   입력/ 출력/ 검색은 각각 개별 함수로 구현한다. 
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
//	struct Student* next; // 정렬때 사용
//};
//
//int main()
//{
//	int totalStudent = 0, menu = 0;
//	
//	// 입력
//	printf("입력 받을 총 학생 수를 입력하시오 : ");
//	scanf("%d", &totalStudent);
//
//	// ==================
//	Stu* s[100]; // totalStudent 수
//
//
//	while (menu != 4)
//	{
//		printf("\n메뉴 선택 : 1. 입력 / 2. 출력 / 3. 검색 / 4. 종료\n");
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
//		printf("학번 : ");
//		scanf("%d", &(s[i].ID));
//		getchar();
//		printf("이름 : ");
//		gets(s[i].name);
//		printf("국어, 영어 ,수학 점수 : ");
//		scanf("%d %d %d", &(s[i].grade[0]), &(s[i].grade[1]), &(s[i].grade[2]));
//	}
//}
//
//void Output(Stu s[], int totalStudent)
//{
//	printf("학번  이름  국어 영어 수학  총점  평균  학점\n");
//	printf("==============================================\n");
//	for (int i = 0; i < totalStudent; i++)
//	{
//		printf("%4d %6s %3d  %3d  %3d  %4d   %.1lf %3c\n", s[i].ID, s[i].name, s[i].grade[0], s[i].grade[1], s[i].grade[2], s[i].total, s[i].average, s[i].finalGrade);
//	}
//
//	//// 정렬
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
//// 안됨
//void Search(Stu s[], int totalStudent)
//{
//	char input[20];
//	printf("검색하려는 학생의 이름을 입력해주세요 : ");
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
