#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q2. p.512 성적 처리 프로그램
	학번, 이름, 학점(국/영/수)을 입력 받을 수 있는 구조체를 만들고,
	임의의 수의 학생에 대한 데이터를 입력 받아 출력하는 프로그램을 작성하라.
	다음 4개의 메뉴를 구성하고, 각 메뉴 선택시 작동은 다음과 같다.
	1. 입력 - 학번, 이름, 성적 순으로 입력
	2. 출력 - 성적(평균)에 따라 (정렬된 형태로) 출력
	3. 검색 - 이름으로 해당 학생의 학점, 성적을 출력
	4. 종료
	단, 
		1. 번호 중복 불가, 이름은 중복 가능
		2. 검색 -> 이름 검색으로 하고 먼저 찾은 것을 우선으로 출력
		3. 메모리 할당 사용, 자기 참조 구조체 활용,
		   입력/ 출력/ 검색은 각각 개별 함수로 구현한다. 
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
	
	struct Student* next; // 정렬때 사용
};

int main()
{
	int totalStudent = 0, menu = 0;
	
	// 입력
	printf("입력 받을 총 학생 수를 입력하시오 : ");
	scanf("%d", &totalStudent);

	Stu* s = (Stu*)malloc(sizeof(Stu));

	while (menu != 4)
	{
		printf("\n메뉴 선택 : 1. 입력 / 2. 출력 / 3. 검색 / 4. 종료\n");
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

		printf("학번 : ");
		scanf("%d", &(s[i].ID));
		for (int j = 0; j < i; j++)
		{
			if (s[i].ID == s[j].ID)
			{
				printf("번호가 중복됩니다. 다시 입력해주세요.\n");
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

		printf("이름 : ");
		gets(s[i].name);
		printf("국어, 영어 ,수학 점수 : ");
		scanf("%lf %lf %lf", &(s[i].grade[0]), &(s[i].grade[1]), &(s[i].grade[2]));
		getchar();
	}
}

void Output(Stu* s, int totalStudent)
{
	// 자기참조구조체로 정렬 실패
	//Stu* sort;
	//sort->next = NULL;

	//sort = &s[0];

	//// 평균이 큰 순서대로 s[] 배열 정렬
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

	printf("학번\t이름\t국어\t영어\t수학\t\t총점\t평균  학점\n");
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
	printf("검색하려는 학생의 이름을 입력해주세요 : ");
	gets(input);

	int check = 0;
	for (int i = 0; i < totalStudent; i++)
	{
		if (strcmp(s[i].name, input) == 0)
		{
			printf("이름 : %s\n", input);
			printf("%.2lf  %.2lf  %.2lf %c\n", s[i].grade[0], s[i].grade[1], s[i].grade[2], s[i].finalGrade);
			check = 1;
		}
	}
	if (!check)	printf("검색하고자 하는 학생이 존재하지 않습니다.\n");
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