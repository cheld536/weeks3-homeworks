#include<stdio.h>

int main() {

int list[5];                                                        			//int�� ���� 5���� ������ �迭 ����
int *plist[5] = {NULL,};                                                                // int�� ������ �迭�� Null������ �ʱ�ȭ

plist[0] = (int*)malloc(sizeof(int));                                                   // plist[0]���ٰ� int�� ũ�� ��ŭ �����Ҵ� ���ش�.

list[0] = 1;                                                                            // list[0]�� 1�� �ʱ�ȭ ���ش�.
list[1] = 100;                                                                          // list[1]�� 100���� �ʱ�ȭ ���ش�.

*plist[0]=200;                                                                          // plist[0]�� ����Ű�� ���� 200���� �ʱ�ȭ ���ش�.

printf("value of list[0]             = %d\n", list[0]);                                 // list[0]�� ���� ���         
printf("address of list [0]          = %p\n", &list[0]);                                // list[0]�� �ּҸ� ���
printf("value of list                = %p\n", list);                                    // list�� ���� ���
printf("address of list ( &list)     = %p\n", &list);                                   // list�� �ּҸ� ���


printf("-------------------------------------------------------------------\n\n");
printf("value of list[1]             = %d\n", list[1]);                                 // list[1]�� ���� ���
printf("address of list [1]          = %p\n", &list[1]);                                // list[1]�� �ּҸ� ���
printf("value of *(list+1)           = %d\n", *(list+1));                               // (list+1) �� ���
printf("address of list (list+1)     = %p\n", list+1);                                  // (list+1) �ּҸ� ��� 

printf("-------------------------------------------------------------------\n\n");

printf("value of *plist[0]            = %d\n", *plist[0]);                               //plist[0]�� ����Ű�� ���� ���
printf("&plist[0]                     = %p\n", &plist[0]);                               //plist[0]�� ����Ű�� �ּҸ� ���
printf("&plist                        = %p\n", &plist);                                  //plist�� ����Ű�� �ּҸ� ���
printf("plist                         = %p\n", plist);                                   //plist�� ����Ű�� �ּҸ� ���
printf("plist[0]                      = %p\n", plist[0]);                                //plist[0]�� ���� ���
printf("plist[1]                      = %p\n", plist[1]);                                //plist[1]�� ���� ��� ������ NULL�� ����Ǿ ���� ������ �ʴ´�.
printf("plist[2]                      = %p\n", plist[2]);								 //plist[2]�� ���� ��� ������ NULL�� ����Ǿ ���� ������ �ʴ´�.
printf("plist[3]                      = %p\n", plist[3]);								 //plist[3]�� ���� ��� ������ NULL�� ����Ǿ ���� ������ �ʴ´�.
printf("plist[4]                      = %p\n", plist[4]);								 //plist[4]�� ���� ��� ������ NULL�� ����Ǿ ���� ������ �ʴ´�.

printf("-------------------------------------------------------------------\n\n");
printf("[----- [�� �� ��] [2018038014] -----\n\n]");
