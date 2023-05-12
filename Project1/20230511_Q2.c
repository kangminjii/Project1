#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q2. 다음과 같이 2개의 int형 포인터 변수와 길이가 5인 int형 배열을 선언한다.

	 int* maxPtr;
	 int* minPtr;
	 int arr[5];
	MaxAndMin이란 함수를 정의하고 이를 호출하여 위 배열과 두 포인터를 변수로 전달한다.
	리턴 값은 없다. 이 함수의 호출이 완료되면, 포인터 변수 maxPtr에는 가장 큰 값이 
	minPtr에는 가장 작은 배열 요소의 주소 값이 저장되어야 한다.
	결과 > 
		arr 주소값과, 최대, 최소의 주소값
		maxPtr, minPtr이 가진 주소에 저장된 값을 출력하라.
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
	printf("maxPtr의 주소값 : %p / maxPtr의 주소값 : %p\n\n", &maxPtr, &minPtr);
	printf("arr 주소값 : %p / 최대 주소값 : %p / 최소 주소값 : %p\n\n", &arr, maxPtr, minPtr);
	printf("maxPtr에 저장된 값 : %d / minPtr에 저장된 값 : %d\n\n", *maxPtr, *minPtr);

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