#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
Q1. p.554 도전 실전 예제
*/

void main()
{
	FILE* ifpa, * ifpb1, *ifpb, * ofp;
	char strA[80];
	char strB[80];
	char* resA, *resB;

	
	// 입력 받은 걸 출력하는 부분은 구현X
	// b.txt 입력
	/*ifpb1 = fopen("b.txt", "w+");
	if (ifpb1 == NULL)
	{
		printf("입력 파일을 열지 못했습니다.\n");
		return 1;
	}
	while (1)
	{
		printf("b.txt에 입력할 단어 : ");
		scanf("%s", strB);
		if (strcmp(strB, "end") == 0)		break;
		else
		{
			fprintf(ifpb1, "%s\n", strB);
		}
	}*/

	// c.txt 결과
	ifpb = fopen("b.txt", "r");
	if (ifpb == NULL)
	{
		printf("입력 파일을 열지 못했습니다.\n");
		return 1;
	}

	ofp = fopen("c.txt", "w");
	if (ofp == NULL)
	{
		printf("출력 파일을 열지 못했습니다.\n");
		return 1;
	}

	while (1)
	{
		ifpa = fopen("a.txt", "r");
		if (ifpa == NULL)
		{
			printf("입력 파일을 열지 못했습니다.\n");
			return 1;
		}

		resB = fgets(strB, sizeof(strB), ifpb);
		if (resB == NULL)		break;
		
		while (1)
		{
			resA = fgets(strA, sizeof(strA), ifpa);
			if (strcmp(strA, strB) == 0)
			{
				fclose(ifpa);
				break;
			}
			if (resA == NULL)
			{
				fputs(strB, ofp);
				fclose(ifpa);
				break;
			}
		}
	}

	
	//fclose(ifpb1);
	fclose(ifpb);
	fclose(ofp);
}