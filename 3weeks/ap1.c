#include<stdio.h>

int main() {

int list[5];                                                        			//int형 변수 5개를 저장할 배열 선언
int *plist[5] = {NULL,};                                                                // int형 포인터 배열을 Null값으로 초기화

plist[0] = (int*)malloc(sizeof(int));                                                   // plist[0]에다가 int형 크기 많큼 동적할당 해준다.

list[0] = 1;                                                                            // list[0]를 1로 초기화 해준다.
list[1] = 100;                                                                          // list[1]를 100으로 초기화 해준다.

*plist[0]=200;                                                                          // plist[0]이 가르키는 값을 200으로 초기화 해준다.

printf("value of list[0]             = %d\n", list[0]);                                 // list[0]의 값을 출력         
printf("address of list [0]          = %p\n", &list[0]);                                // list[0]의 주소를 출력
printf("value of list                = %p\n", list);                                    // list의 값을 출력
printf("address of list ( &list)     = %p\n", &list);                                   // list의 주소를 출력


printf("-------------------------------------------------------------------\n\n");
printf("value of list[1]             = %d\n", list[1]);                                 // list[1]의 값을 출력
printf("address of list [1]          = %p\n", &list[1]);                                // list[1]의 주소를 출력
printf("value of *(list+1)           = %d\n", *(list+1));                               // (list+1) 값 출력
printf("address of list (list+1)     = %p\n", list+1);                                  // (list+1) 주소를 출력 

printf("-------------------------------------------------------------------\n\n");

printf("value of *plist[0]            = %d\n", *plist[0]);                               //plist[0]이 가르키는 값을 출력
printf("&plist[0]                     = %p\n", &plist[0]);                               //plist[0]이 가르키는 주소를 출력
printf("&plist                        = %p\n", &plist);                                  //plist가 가르키는 주소를 출력
printf("plist                         = %p\n", plist);                                   //plist가 가르키는 주소를 출력
printf("plist[0]                      = %p\n", plist[0]);                                //plist[0]의 값을 출력
printf("plist[1]                      = %p\n", plist[1]);                                //plist[1]의 값을 출력 하지만 NULL로 선언되어서 값이 나오지 않는다.
printf("plist[2]                      = %p\n", plist[2]);								 //plist[2]의 값을 출력 하지만 NULL로 선언되어서 값이 나오지 않는다.
printf("plist[3]                      = %p\n", plist[3]);								 //plist[3]의 값을 출력 하지만 NULL로 선언되어서 값이 나오지 않는다.
printf("plist[4]                      = %p\n", plist[4]);								 //plist[4]의 값을 출력 하지만 NULL로 선언되어서 값이 나오지 않는다.

printf("-------------------------------------------------------------------\n\n");
printf("[----- [김 윤 희] [2018038014] -----\n\n]");
