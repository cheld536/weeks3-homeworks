#include<stdio.h>


int main()
{
    int **x;                                                       // 정수형 이중포인터 변수 선언

    printf("sizeof(x) = %lu\n", sizeof(x));                        // 포인터 크기가 출력된다. 이 값은 사용자의 운영체제에 따라서 값이 바뀐다.
    printf("sizeof(*x) = %lu\n", sizeof(*x));                      // 역참조한 포인터 크기가 출력된다. 이 값은 사용자의 운영체제에 따라서 값이 바뀐다.
    printf("sizeof(**x) = %lu\n", sizeof(**x));                    // 두번 역참조한 정수형의 크기가 출력된다.
    printf("--------------------------------------------------------------\n\n");
    printf("[---- [ 김 윤 희 ] [2018038014] -----]\n\n");
}