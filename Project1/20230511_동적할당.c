#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//int* pi = (int*)malloc(sizeof(int));
	//memset(pi, 0, sizeof(int)); // memset: 메모리 0으로 초기화

	int* pi;
	int size = 5;
	int count = 0;
	int num;


	pi = (int*)calloc(size, sizeof(int)); // calloc: 할당과 초기화를 동시에 해줌, 0으로 초기화해줌

	while (1)
	{
		printf("양수만 입력하세요 => ");
		scanf("%d", &num);
		if (num <= 0)	break;
		if (count == size) 
		{
			size += 5; // 5개의 입력을 초과했을 때 공간을 늘린다
			pi = (int*)realloc(pi, size * sizeof(int)); // realloc: 공간 확보하고, 기존 데이터 불러오고, 뒤쪽에 데이터 새로 추가
		}
		pi[count++] = num;
	}

	for (int i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}




	if (pi == NULL)
	{
		printf("메모리 할당 실패\n");
		exit(1);
	}

	free(pi);  // 메모리 할당 해제

	return 0;
}