#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
Q3. p.448 도전 실전 예제
*/

void swap(char* str, void* a, void* b);

int main()
{
	int first_age, second_age;
	double first_height, second_height;
	
	char str_int[10] = "int";
	char str_double[10] = "double";
	

	printf("첫 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &first_age, &first_height);
	printf("\n두 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &second_age, &second_height);

	void* fap = &first_age;
	void* fhp = &first_height;
	void* sap = &second_age;
	void* shp = &second_height;

	swap(str_int, fap, sap);
	swap(str_double, fhp, shp);

	printf("\n첫 번째 사람의 나이와 키 : %d, %.2lf\n", first_age, first_height);
	printf("\n두 번째 사람의 나이와 키 : %d, %.2lf\n", second_age, second_height);

	return 0;
}

void swap(char* str, void* a, void* b)
{
	if (strcmp(str, "int") == 0)
	{
		int temp = *(int *)a;
		*(int*)a = *(int*)b;
		*(int*)b = temp;
	}

	if (strcmp(str, "double") == 0)
	{
		double temp = *(double *)a;
		*(double *)a = *(double *)b;
		*(double *)b = temp;
	}
}


