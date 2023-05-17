#include <stdio.h>

int count = 0;
static int total = 0;
double total1();

int main()
{
	printf("컴파일 날짜와 시간 : %s %s\n", __DATE__, __TIME__);
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n\n", __LINE__);


	double avg = total1();

	printf("total is : %.1f\n", avg);

}

/*
// #average.c
extern int count;
extern int total;

double total1()
{
	return total;
}
*/

/*
// #input.c
extern int count;
int total = 1;
*/