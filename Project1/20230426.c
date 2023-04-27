#include <stdio.h>
#include <stdlib.h>

int main()
{   
    printf("%s의 나이는 %d이고 키는 %lfcm입니다.\n", "홍길동", 25, 180.3);
    printf("Goot\bd\t!!\n"); // Good    !!
    printf("Goot\rF\n");     // Foot
    
    printf("%d %o %x\n", 12, 12, 12); // 12 14 c
    
    printf("%f\n", 1e6); // 1000000.000000
    printf("%.7f\n", 3.14e-5); //  0.0000314
    printf("%.2e\n", 0.0000314); // 3.14e-05

    printf("%c\n", '1');
    printf("%s", "A");


    return 0;
}
