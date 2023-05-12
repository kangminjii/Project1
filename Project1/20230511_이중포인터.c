#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);

int main()
{
	//int a = 10;
	//int* pi;
	//int** ppi;
	//
	//pi = &a;
	//ppi = &pi;

	//printf("변수	변숫값	 &연산	  *연산	    **연산\n\n");
	//printf(" a  %10d%10u\n", a, &a);
	//printf(" pi %10u%10u%10d\n", pi, &pi, *pi);
	//printf(" ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);


	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);


	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;
	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}
