#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q2. ���̰� 6�� int�� �迭 Arr�� �����ϰ� �� 1, 2, 3, 4, 5, 6���� �ʱ�ȭ �� ������ �迭�� ����� ���� ������
	6, 5, 4, 3, 2, 1�� �ǵ��� �����ϴ� ���α׷��� �ۼ��϶�.
	��, �迭�� �� �հ� �� �ڸ� ����Ű�� ������ ���� 2���� �����ؼ� �̸� Ȱ���Ͽ� ����� ���� ������ �ٲ۴�.
		

Q3. ������ ���ڿ��� �Է� �޾Ƽ� ������ ����ϴ� ���α׷��� �ۼ��϶�.
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