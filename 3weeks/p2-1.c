#include<stdio.h>
#define MAX_SIZE 100                              // MAX_SIZE�� 100���� ����
float sum(float list[], int);                     // ��ȯ���� float�� sum �Լ� ����
float input[MAX_SIZE], answer;                    // ��ȯ���� float�� input �Լ� ����, ���� answer ����
int i;                                            // ���� ���� i�� ����

void main(void)
{
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;                              // MAX_SIZE�� ũ�� ��ŭ �迭�� �����ϰ� �迭���� i�ǰ����� �ʱ�ȭ ���ش�.
    answer = sum(input, MAX_SIZE);                 // sum�̶�� �Լ��� ȣ���Ͽ��� ��ȯ ���� answer�� ����, ȣ�� �� input�� �ּҸ� ����־ �ּҰ� sum�Լ��� list�� ����ȴ�.
    printf("The sum is: %f\n", answer);            // ���� ���� ���� ����Ѵ�.

    printf("--------------------------------------------------------------------\n\n");
    printf("[----- [�� �� ��] [2018038014] -----]\n\n");
}

float sum(float list[], int n)
{
    int i;                                        
    float tempsum =0;                             // ������ �����ϰ� 0���� �ʱ�ȭ ���ش�.
    for(i=0; i<n; i++)                            // MAX_SIZE ��ŭ �ݺ����ش�.
        tempsum += list[i];                       // input �迭�� list�� ���ؼ� ����, ����Ǿ��ִ� ���� �� �����ش�.
    return tempsum;                               // �� ������ ���� ��ȯ �Ѵ�.
}