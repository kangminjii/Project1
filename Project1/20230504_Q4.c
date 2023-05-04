#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q4. int형 num1, num2를 선언과 동시에 10과 20으로 초기화해주고,
	int 형 포인터 ptr1, ptr2를 선언하고,
	각 num1과 num2를 이용해서 num1은 10증가, num2는 10감소 한다.
	이후 ptr1과 ptr2가 가리키는 대상을 서로 바꾼다.
	마지막으로 ptr1과 ptr2가 가리키는 변수의 내용을 출력한다.
	각 변수 num1, num2도 출력해서 저장된 값이 같은지 확인한다.
*/

int main()
{
	//int a = 10, b = 15;
	//const int*  pa = &a;
	//int* pb = &b;

	//pa = &a;
	//a = 20;
	//// *pa = 30;  const일때 못함

	int num1 = 10;
	int num2 = 20;

	int* ptr1 = &num1;
	int* ptr2 = &num2;

	*ptr1 += 10;
	*ptr2 -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("ptr1이 가리키는 변수 : %d\n", *ptr1);
	printf("ptr2이 가리키는 변수 : %d\n", *ptr2);

	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);


	return 0;
}