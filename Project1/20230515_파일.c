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
		printf("���� ���� ����\n");
		exit(1);
	}

	printf("���� ���� ����\n");


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
	//// rt : �ؽ�Ʈ���Ϸ� ����
	//// rb > 13  10  13  13  10  26  13  10  13  10
	//// rb : ���̳ʸ� ������ �б� ���� ����

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
		printf("������ ������ ���߽��ϴ�.");
		return 1;
	}

	while (1)
	{
		printf("���� �̸� : ");
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

	//// �Է� ���� �б� �������� ����
	//ifp = fopen("a.txt", "r");
	//if (ifp == NULL)
	//{
	//	printf("�Է� ������ ���� ���߽��ϴ�.\n");
	//	return 1;
	//}

	//// ��� ���� ���� �������� ����
	//ofp = fopen("b.txt", "w");
	//if (ofp == NULL)
	//{
	//	printf("��� ������ ���� ���߽��ϴ�.\n");
	//	return 1;
	//}

	//// ���ڿ� �Է� -> ��� �ݺ�
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
		printf("�Է� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w");
	if (ofp == NULL)
	{
		printf("��� ������ ���� ���߽��ϴ�.\n");
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
	fgetc(fp); // ���ۿ��� ���� ���ڸ� �о� ��ȯ�ϸ� �� ���� ������ ������� ������ ��������
	fgets(name, sizeof(name), fp);

	printf("���� : %d, �̸� :%s", age, name);
	fclose(fp);












	return 0;
}

