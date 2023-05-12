#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q2. ������ ���� 2���� int�� ������ ������ ���̰� 5�� int�� �迭�� �����Ѵ�.

	 int* maxPtr;
	 int* minPtr;
	 int arr[5];
	MaxAndMin�̶� �Լ��� �����ϰ� �̸� ȣ���Ͽ� �� �迭�� �� �����͸� ������ �����Ѵ�.
	���� ���� ����. �� �Լ��� ȣ���� �Ϸ�Ǹ�, ������ ���� maxPtr���� ���� ū ���� 
	minPtr���� ���� ���� �迭 ����� �ּ� ���� ����Ǿ�� �Ѵ�.
	��� > 
		arr �ּҰ���, �ִ�, �ּ��� �ּҰ�
		maxPtr, minPtr�� ���� �ּҿ� ����� ���� ����϶�.
*/

void MaxAndMin(int** max, int** min, int array[], int length);


int main()
{
	int* maxPtr;
	int* minPtr;
	int arr[5];

	int length = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < length; i++)
	{
		scanf("%d", &arr[i]);
	}

	MaxAndMin(&maxPtr, &minPtr, arr, length);

	printf("\n");
	printf("maxPtr�� �ּҰ� : %p / maxPtr�� �ּҰ� : %p\n\n", &maxPtr, &minPtr);
	printf("arr �ּҰ� : %p / �ִ� �ּҰ� : %p / �ּ� �ּҰ� : %p\n\n", &arr, maxPtr, minPtr);
	printf("maxPtr�� ����� �� : %d / minPtr�� ����� �� : %d\n\n", *maxPtr, *minPtr);

	return 0;
}

void MaxAndMin(int** max, int** min, int array[], int length)
{
	*max = &array[0];
	*min = &array[0];

	for (int i = 0; i < length; i++)
	{
		if (array[i] > **max)	*max = &array[i];
		if (array[i] < **min)	*min = &array[i];
	}
}