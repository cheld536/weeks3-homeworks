  
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int list[5];
    int *plist[5];

    list[0] = 10;
    list[1] = 11;

    plist[0] = (int*)malloc(sizeof(int));                                   // plist[0]���ٰ� int�� ũ�� ��ŭ �����Ҵ� ���ش�.

    printf("list[0] \t=%d\n",list[0]);                                      // list[0]�� ���� ����Ѵ�.
    printf("address of list \t= %p\n", list);                               // list�� �ּҸ� ����Ѵ�.
    printf("address of list[0] \t = %p\n",&list[0]);                        // list[0]�� �ּҸ� ����Ѵ�.
    printf("address of list + 0 \t= %p\n",list+0);                          // list + 0 �� �ּҸ� ����Ѵ�.
    printf("address of list + 1 \t= %p\n",list+1);                          // list + 1 �� �ּҸ� ����Ѵ�.
    printf("address of list + 2 \t= %p\n",list+2);                          // list + 2 �� �ּҸ� ����Ѵ�. 
    printf("address of list + 3 \t= %p\n",list+3);                          // list + 3 �� �ּҸ� ����Ѵ�.  
    printf("address of list + 4 \t= %p\n",list+4);                          // list + 4 �� �ּҸ� ����Ѵ�.  
    printf("address of list[4] \t= %p\n ",&list[4]);                        // list [4] �� �ּҸ� ����Ѵ�.

    printf("--------------------------------------------------------------------------\n\n");
    
    printf("[----- [�� �� ��] [2018038014] -----]\n\n");
    

}