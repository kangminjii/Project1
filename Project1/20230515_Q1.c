#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
Q1. p.554 ���� ���� ����
*/

void main()
{
	FILE* ifpa, * ifpb1, *ifpb, * ofp;
	char strA[80];
	char strB[80];
	char* resA, *resB;

	
	// �Է� ���� �� ����ϴ� �κ��� ����X
	// b.txt �Է�
	/*ifpb1 = fopen("b.txt", "w+");
	if (ifpb1 == NULL)
	{
		printf("�Է� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}
	while (1)
	{
		printf("b.txt�� �Է��� �ܾ� : ");
		scanf("%s", strB);
		if (strcmp(strB, "end") == 0)		break;
		else
		{
			fprintf(ifpb1, "%s\n", strB);
		}
	}*/

	// c.txt ���
	ifpb = fopen("b.txt", "r");
	if (ifpb == NULL)
	{
		printf("�Է� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	ofp = fopen("c.txt", "w");
	if (ofp == NULL)
	{
		printf("��� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	while (1)
	{
		ifpa = fopen("a.txt", "r");
		if (ifpa == NULL)
		{
			printf("�Է� ������ ���� ���߽��ϴ�.\n");
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