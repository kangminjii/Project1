#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* my_strcpy(char* pd, char* ps);
char* my_strncpy(char* pd, char* ps, int n);
char* my_strcat(char* pd, char* ps);
char* my_strncat(char* pd, char* ps, int n);
int my_strlen(char* ps);
int my_strcmp(char* pa, char* pb);
int my_strncmp(char* pa, char* pb, int n);

int main()
{
// #1 ���ڿ� ��� ����

	/*printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
	printf("�� ��° ������ �ּ� �� : %p\n", "apple" + 1);
	printf("ù ��° ���� : %c\n", *("apple"));
	printf("�� ��° ���� : %c\n", *("apple" + 1));
	printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);*/


// #2  char �����ͷ� ���ڿ� ���

	//char szBuf[12] = { "Test String" };
	//char* pszData = "Test String";

	//printf("%d\n", szBuf == pszData); // 0 -> �����ϴ� �޸� ������ �ٸ���
	//printf("%d\n", "Test String" == pszData); // 1 -> �ּҸ� ���ؼ� ����
	//
	//printf("%d\n", "Test String" == "Data String"); // 0
	//printf("%p\n", "Test String");
	//printf("%p\n", "Data String");


// #3 fgets �Լ�

	//char str[80];
	//printf("������ ������ ���ڿ� �Է� : ");
	//fgets(str, sizeof(str), stdin);
	//str[strlen(str) - 1] = '\0'; // ���� ���ڰ� ���ۿ� ����Ǵ� ���� ������

	//printf("�Էµ� ���ڿ��� %s�Դϴ�\n", str);


// #4 ���� ���ڷ� ���� gets �Լ��� �Է��� ���ϴ� ���

	//int age;
	//char name[20];

	//printf("���� �Է� : ");
	//scanf("%d", &age);

	//printf("�̸� �Է� : ");
	//gets(name); // ���� �Է½� ���͸�(���� ����) �ļ� ���ۿ� '\n'�� ����ȴ�
	//			// gets �Լ��� ���ۿ��� '\n'�� ������ �Է��� �����Ƿ� name���� '\n'�� ����ȴ�
	//printf("���� : %d, �̸� : %s\n", age, name);


// #5 puts�� fpust �Լ�

	/*char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");*/


// #6 ���ڿ� ���� �Լ�

	//int a = 10, b = 20;
	//char c[10] = "apple";
	//char d[10] = "pie";

	//printf("%d\n", a + b);
	//printf("%s\n", c + d); // ���ڿ����� ���� �� ����


// #7 strcpy & strncpy �Լ�

	//char str1[80] = "strawberry";
	//str1[0] = 'a';
	//str1[1] = 'p';
	//str1[2] = 'p';
	//str1[3] = 'l';
	//str1[4] = 'e';
	////str1[5] = '\0';

	//printf("str1 : %s\n", str1); // '\0'�� �߰����� ������ appleberry 


	/*char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("���� ���ڿ� str1 : %s\n", str1);
	strcpy(str1, str2);
	printf("strcpy�� �ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps1);
	printf("ps1���� �ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps2);
	printf("ps2�� �ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, "banana");
	printf("���ο� ���ڿ��� �����ؼ� �ٲ� ���ڿ� : %s\n", str1);

	strncpy(str1, "apple-pie", 3);
	printf("strncpy�� �̿��� �ٲ� ���ڿ� : %s\n", str1);*/


// #8 strcat & strncat �Լ�

	/*char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);*/


// #9 strlen �Լ�

	/*char str1[80], str2[80];
	char* resp;

	printf("2���� ���� �̸� �Է� : ");
	scanf("%s%s", str1, str2);

	if (strlen(str1) > strlen(str2))	resp = str1;
	else resp = str2;

	printf("�̸��� �� ������ : %s\n", resp);*/


// #10 strcmp & strncmp �Լ�

	//char str1[80] = "pear";
	//char str2[80] = "peach";

	//printf("������ ���߿� ������ ���� �̸� : ");

	//// strcmp(str1, str2)
	//// str1�� str2���� ���߿� ������ 1 ��ȯ
	//// str1�� str2���� ������ ���� ������ -1 ��ȯ
	//// str1�� str2�� ���� ���ڿ��̸� 0 ��ȯ
	//if (strcmp(str1, str2) > 0)	printf("%s\n", str1);
	//else printf("%s\n", str2);


	//if (strncmp(str1, str2, 3) == 0)	printf("����\n");
	//else printf("�ٸ���\n");


// #11 ����� ���� �Լ��� ����

	//char str[80] = "strawberry";

	////strcpy & strncpy
	//printf("�ٲ�� �� ���ڿ� : %s\n", str);
	//my_strcpy(str, "banana");
	//printf("�ٲ� �� ���ڿ� : %s\n", str);
	//printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));

	//printf("�ٲ�� �� ���ڿ� : %s\n", str);
	//my_strncpy(str, "apple-pie", 2);
	//printf("�ٲ� �� ���ڿ� : %s\n", str);


	//char str[80] = "strawberry";

	////strcat & strncat
	//printf("�ٲ�� �� ���ڿ� : %s\n", str);
	//my_strcat(str, "apple");
	//printf("�ٲ� �� ���ڿ� : %s\n", str);

	//printf("�ٲ�� �� ���ڿ� : %s\n", str);
	//my_strncat(str, "piece_of_pie", 3);
	//printf("�ٲ� �� ���ڿ� : %s\n", str);


	//char str[80] = "strawberry";

	//// strlen
	//printf("str�� ���ڿ� ���� : %d\n", my_strlen(str));


	// strcmp & strncmp
	char str1[80] = "strawberry";
	char str2[80] = "strawberry";

	if (my_strcmp(str1, str2) == 0)	printf("����\n");
	else printf("�ٸ���\n");

	if (my_strncmp(str1, str2, 5) == 0)	printf("����\n");
	else printf("�ٸ���\n");


	return 0;
}


char* my_strcpy(char* pd, char* ps)
{
	char* po = pd;

	while (*ps != '\0')
	{
		*pd = *ps;  // *po = *ps;
		pd++;		// *po
		ps++;
	}

	*pd = '\0';		// *po = '\0';

	return po;		// return pd;
}

char* my_strncpy(char* pd, char* ps, int n)
{
	char* po = pd;

	for (int i = 0; i < n; i++)
	{
		*pd = *ps;
		pd++;
		ps++;
	}

	return po;
}

char* my_strcat(char* pd, char* ps)
{
	char* po = pd;

	while (*pd != '\0')
	{
		pd++;
	}

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}

	*pd = '\0';

	return po;
}

char* my_strncat(char* pd, char* ps, int n)
{
	char* po = pd;

	while (*pd != '\0')
	{
		pd++;
	}

	for (int i = 0; i < n; i++)
	{
		*pd = *ps;
		pd++;
		ps++;
	}

	*pd = '\0';

	return po;
}

int my_strlen(char* ps)
{
	int cnt = 0;
	while (*ps != '\0')
	{
		cnt++;
		ps++;
	}

	return cnt;
}

int my_strcmp(char* pa, char* pb)
{
	while ((*pa == *pb) && (*pa != '\0'))	// �� ���ڰ� ������ null ���ڰ� �ƴ� ���
	{
		pa++;
		pb++;
	}

	if (*pa > *pb)	return 1;		// pa�� �� �ʰ� ���´�
	else if (*pa < *pb)	return -1;	// pb�� �� �ʰ� ���´�
	else return 0;					// �� ���ڰ� ����
}

int my_strncmp(char* pa, char* pb, int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((*pa == *pb) && (*pa != '\0'))
		{
			pa++;
			pb++;
		}
	}

	if (*pa > *pb)	return 1;		// pa�� �� �ʰ� ���´�
	else if (*pa < *pb)	return -1;	// pb�� �� �ʰ� ���´�
	else return 0;					// �� ���ڰ� ����
}
