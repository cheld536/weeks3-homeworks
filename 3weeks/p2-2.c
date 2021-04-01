#include<stdio.h>
#define MAX_SIZE 100                                            //MAX_SIZE를 100으로 정의
float sum(float list [], int);                                  // 반환값이 float인 sum 함수 정의
float input[MAX_SIZE], answer;                                  //float형 배열을 MAX_SIZE크기 만큼 만든다, float형 변수 answer 선언

int i;                                                          // 변수 i 선언
void main(void)
{
    for(i=0; i,MAX_SIZE; i++)
    {
        input[i] = i;                                           // MAX_SIZE의 크기 만큼 배열을 선언하고 배열마다 i의 값으로 초기화 해준다.
    }
    answer = sum(input,MAX_SIZE);                               // sum이라는 함수를 호출하여서 반환 값을 answer에 저장, 호출시 input은 주소를 담고 있어서 주소가 sum함수의 list에 복사가 된다.

    printf("The sum is: %lf\n",answer);                         // 계산된 합의 값을 출력한다.
    printf("----------------------------------------------------------------------------------------------");
    printf("[----[김윤희] [2018038014] ------]\n\n");

    return ;
}

float sum(float list[],int n)
{
    int i;
    float tempsum =0;                                             // 합산된 값을 저장할 float형 변수를 0으로 초기화 해준다.
    for(i=0;i<n; i++)                                             // MAX_SIZE 만큼 반복 해준다.
    {
        tempsum+=list[i];                                         // input 배열을 list를 통해서 접근, 저장되어있는 값들을 다 더해준다.      
    }
    return tempsum;                                               // 다 더해진 값들을 반환한다.
}