#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	// #1
	/*FILE* fp;
	char str[] = "banana";


	int ch;
	
	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
		exit(1);
	}

	printf("파일 열기 성공\n");


	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)	break;
		putchar(ch);
	}*/


	// #2
	// FILE* fp;
	//int array[10] = { 13, 10, 13, 13, 10, 26, 13, 10, 13, 10 };
	//int res;

	//fp = fopen("a.txt", "wb");
	//for (int i = 0; i < 10; i++)
	//{
	//	fputc(array[i], fp);
	//}

	//fclose(fp);
	//
	//fp = fopen("a.txt", "rt");
	//// rt > 10  13  10
	//// rt : 텍스트파일로 개방
	//// rb > 13  10  13  13  10  26  13  10  13  10
	//// rb : 바이너리 파일을 읽기 위해 개방

	//while (1)
	//{
	//	res = fgetc(fp);
	//	if (res == EOF) break;
	//	printf("%4d", res);
	//}

	//fclose(fp);


	// #3
	/*FILE* fp;
	char str[20];

	fp = fopen("a.txt", "a+");
	if (fp == NULL)
	{
		printf("파일을 만들지 못했습니다.");
		return 1;
	}

	while (1)
	{
		printf("과일 이름 : ");
		scanf("%s", str);
		if (strcmp(str, "end") == 0)		break;
		else if (strcmp(str, "list") == 0)
		{
			fseek(fp, 0, SEEK_SET);
			while (1)
			{
				fgets(str, sizeof(str), fp);
				printf("%s", str);

				if (feof(fp))		break;
			}
		}
		else
		{
			fprintf(fp, "%s\n", str);
		}
	}

	fclose(fp);*/


	// #4
	//FILE* ifp, * ofp;
	//char str[80];
	//char* res;

	//// 입력 파일 읽기 전용으로 개방
	//ifp = fopen("a.txt", "r");
	//if (ifp == NULL)
	//{
	//	printf("입력 파일을 열지 못했습니다.\n");
	//	return 1;
	//}

	//// 출력 파일 쓰기 전용으로 개방
	//ofp = fopen("b.txt", "w");
	//if (ofp == NULL)
	//{
	//	printf("출력 파일을 열지 못했습니다.\n");
	//	return 1;
	//}

	//// 문자열 입력 -> 출력 반복
	//while (1)
	//{
	//	res = fgets(str, sizeof(str), ifp);
	//	if (res == NULL)		break;
	//	str[strlen(str) - 1] = '\0';
	//	fputs(str, ofp);
	//	fputs(" ", ofp);
	//}

	//fclose(ifp);
	//fclose(ofp);


	// #5
	/*FILE* ifp, * ofp;
	char name[20];
	int kor, eng, math, total;
	double avg;
	int res;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL)
	{
		printf("입력 파일을 열지 못했습니다.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w");
	if (ofp == NULL)
	{
		printf("출력 파일을 열지 못했습니다.\n");
		return 1;
	}

	while (1)
	{
		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
		if (res == EOF)		break;
		total = kor + eng + math;
		avg = total / 3.0;
		fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
	}

	fclose(ifp);
	fclose(ofp);*/
	

	// #6
	FILE* fp;
	int age;
	char name[20];

	fp = fopen("a.txt", "r");

	fscanf(fp, "%d", &age);
	fgetc(fp); // 버퍼에서 개행 문자를 읽어 반환하며 그 값은 별도로 사용하지 않으면 버려진다
	fgets(name, sizeof(name), fp);

	printf("나이 : %d, 이름 :%s", age, name);
	fclose(fp);












	return 0;
}

