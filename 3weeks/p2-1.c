#include<stdio.h>
#define MAX_SIZE 100                              // MAX_SIZE를 100으로 정의
float sum(float list[], int);                     // 반환값이 float인 sum 함수 정의
float input[MAX_SIZE], answer;                    // 반환값이 float인 input 함수 정의, 변수 answer 정의
int i;                                            // 전역 변수 i를 선언

void main(void)
{
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;                              // MAX_SIZE의 크기 만큼 배열을 선언하고 배열마다 i의값으로 초기화 해준다.
    answer = sum(input, MAX_SIZE);                 // sum이라는 함수를 호출하여서 반환 값을 answer에 저장, 호출 시 input은 주소를 담고있어서 주소가 sum함수의 list에 복사된다.
    printf("The sum is: %f\n", answer);            // 계산된 합의 값을 출력한다.

    printf("--------------------------------------------------------------------\n\n");
    printf("[----- [김 윤 희] [2018038014] -----]\n\n");
}

float sum(float list[], int n)
{
    int i;                                        
    float tempsum =0;                             // 변수를 선언하고 0으로 초기화 해준다.
    for(i=0; i<n; i++)                            // MAX_SIZE 만큼 반복해준다.
        tempsum += list[i];                       // input 배열을 list를 통해서 접근, 저장되어있는 값을 다 더해준다.
    return tempsum;                               // 다 더해진 값을 반환 한다.
}