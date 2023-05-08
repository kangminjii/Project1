#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q2. 길이가 6인 int형 배열 Arr을 선언하고 각 1, 2, 3, 4, 5, 6으로 초기화 한 다음에 배열에 저장된 값의 순서가
	6, 5, 4, 3, 2, 1이 되도록 변경하는 프로그램을 작성하라.
	단, 배열의 맨 앞과 맨 뒤를 가리키는 포인터 변수 2개를 선언해서 이를 활용하여 저장된 값의 순서를 바꾼다.
		

Q3. 임의의 문자열을 입력 받아서 뒤집어 출력하는 프로그램을 작성하라.
	ex)
		input : hello world
		output: dlrow olleh
*/


//// Q2.
//int main()
//{
//	int Arr[6] = { 1, 2, 3, 4, 5, 6 };
//
//	int* start = Arr;
//	int* end = Arr + 5;
//
//	for (int i = 0; i < 6/2; i++)
//	{
//		int temp = *end;
//		*end = *start;
//		*start = temp;
//
//		*start++;
//		*end--;
//	}
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", Arr[i]);
//	}
//
//
//
//	return 0;
//}


// Q3.
int main()
{
	char str[100];
	int size = 0;

	gets(str);

	for (int i = 0; i < 100; i++)
	{
		if (str[i] == '\0')	break;
		size++;
	}

	char* start = str;
	char* end = str + size - 1;
	
	for (int i = 0; i < size/2; i++)
	{
		char temp = *end;
		*end = *start;
		*start = temp;
		
		*start++;
		*end--;
	}

	puts(str);


	return 0;
}