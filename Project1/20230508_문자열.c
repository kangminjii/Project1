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
// #1 문자열 상수 구현

	/*printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
	printf("첫 번째 문자 : %c\n", *("apple"));
	printf("두 번째 문자 : %c\n", *("apple" + 1));
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);*/


// #2  char 포인터로 문자열 사용

	//char szBuf[12] = { "Test String" };
	//char* pszData = "Test String";

	//printf("%d\n", szBuf == pszData); // 0 -> 저장하는 메모리 영역이 다르다
	//printf("%d\n", "Test String" == pszData); // 1 -> 주소를 비교해서 같다
	//
	//printf("%d\n", "Test String" == "Data String"); // 0
	//printf("%p\n", "Test String");
	//printf("%p\n", "Data String");


// #3 fgets 함수

	//char str[80];
	//printf("공백이 포함한 문자열 입력 : ");
	//fgets(str, sizeof(str), stdin);
	//str[strlen(str) - 1] = '\0'; // 개행 문자가 버퍼에 저장되는 것을 방지함

	//printf("입력된 문자열은 %s입니다\n", str);


// #4 개행 문자로 인해 gets 함수가 입력을 못하는 경우

	//int age;
	//char name[20];

	//printf("나이 입력 : ");
	//scanf("%d", &age);

	//printf("이름 입력 : ");
	//gets(name); // 나이 입력시 엔터를(개행 문자) 쳐서 버퍼에 '\n'이 저장된다
	//			// gets 함수는 버퍼에서 '\n'을 가져와 입력을 끝내므로 name에는 '\n'이 저장된다
	//printf("나이 : %d, 이름 : %s\n", age, name);


// #5 puts와 fpust 함수

	/*char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");*/


// #6 문자열 연산 함수

	//int a = 10, b = 20;
	//char c[10] = "apple";
	//char d[10] = "pie";

	//printf("%d\n", a + b);
	//printf("%s\n", c + d); // 문자열끼리 더할 수 없음


// #7 strcpy & strncpy 함수

	//char str1[80] = "strawberry";
	//str1[0] = 'a';
	//str1[1] = 'p';
	//str1[2] = 'p';
	//str1[3] = 'l';
	//str1[4] = 'e';
	////str1[5] = '\0';

	//printf("str1 : %s\n", str1); // '\0'을 추가하지 않으면 appleberry 


	/*char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("최초 문자열 str1 : %s\n", str1);
	strcpy(str1, str2);
	printf("strcpy로 바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);
	printf("ps1으로 바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);
	printf("ps2로 바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana");
	printf("새로운 문자열을 대입해서 바뀐 문자열 : %s\n", str1);

	strncpy(str1, "apple-pie", 3);
	printf("strncpy를 이용해 바뀐 문자열 : %s\n", str1);*/


// #8 strcat & strncat 함수

	/*char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);*/


// #9 strlen 함수

	/*char str1[80], str2[80];
	char* resp;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);

	if (strlen(str1) > strlen(str2))	resp = str1;
	else resp = str2;

	printf("이름이 긴 과일은 : %s\n", resp);*/


// #10 strcmp & strncmp 함수

	//char str1[80] = "pear";
	//char str2[80] = "peach";

	//printf("사전에 나중에 나오는 과일 이름 : ");

	//// strcmp(str1, str2)
	//// str1이 str2보다 나중에 나오면 1 반환
	//// str1이 str2보다 사전에 먼저 나오면 -1 반환
	//// str1과 str2가 같은 문자열이면 0 반환
	//if (strcmp(str1, str2) > 0)	printf("%s\n", str1);
	//else printf("%s\n", str2);


	//if (strncmp(str1, str2, 3) == 0)	printf("같다\n");
	//else printf("다르다\n");


// #11 기능이 같은 함수의 구현

	//char str[80] = "strawberry";

	////strcpy & strncpy
	//printf("바뀌기 전 문자열 : %s\n", str);
	//my_strcpy(str, "banana");
	//printf("바꾼 후 문자열 : %s\n", str);
	//printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));

	//printf("바뀌기 전 문자열 : %s\n", str);
	//my_strncpy(str, "apple-pie", 2);
	//printf("바꾼 후 문자열 : %s\n", str);


	//char str[80] = "strawberry";

	////strcat & strncat
	//printf("바뀌기 전 문자열 : %s\n", str);
	//my_strcat(str, "apple");
	//printf("바꾼 후 문자열 : %s\n", str);

	//printf("바뀌기 전 문자열 : %s\n", str);
	//my_strncat(str, "piece_of_pie", 3);
	//printf("바꾼 후 문자열 : %s\n", str);


	//char str[80] = "strawberry";

	//// strlen
	//printf("str의 문자열 길이 : %d\n", my_strlen(str));


	// strcmp & strncmp
	char str1[80] = "strawberry";
	char str2[80] = "strawberry";

	if (my_strcmp(str1, str2) == 0)	printf("같다\n");
	else printf("다르다\n");

	if (my_strncmp(str1, str2, 5) == 0)	printf("같다\n");
	else printf("다르다\n");


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
	while ((*pa == *pb) && (*pa != '\0'))	// 두 문자가 같지만 null 문자가 아닌 경우
	{
		pa++;
		pb++;
	}

	if (*pa > *pb)	return 1;		// pa가 더 늦게 나온다
	else if (*pa < *pb)	return -1;	// pb가 더 늦게 나온다
	else return 0;					// 두 문자가 같다
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

	if (*pa > *pb)	return 1;		// pa가 더 늦게 나온다
	else if (*pa < *pb)	return -1;	// pb가 더 늦게 나온다
	else return 0;					// 두 문자가 같다
}
