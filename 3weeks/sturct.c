#include<stdio.h>
#include<stdlib.h>
#define FALSE 0
#define TRUE 1
//int humansEqual (student2 person1, student2 person2);



struct student1                                                  // Ÿ���� �������� ���� �л��� ��, ����, �й��� ��� ����ü
{
    char lastname;                                               // �л��� ���� ���� ������ ����
    int studenID;                                                // �л��� �й��� ���� ������ ����
    char grade;                                                  // �л��� ������ ���� ������ ����
};

typedef struct                                                   // Ÿ���� ������ ����ü
{
    char lastname;
    int studenID;
    char grade;    
}student2;

int main()
{
    int i;
    struct student1 st1 = {'A',100,'A'};                         //Ÿ���� ���� ���� �ʾƼ� �տ� struct�� �������Ѵ�. ����ü ���� st1�� A, 100 , A�� �����Ѵ�.

    printf("st1.lastname = %c\n",st1.lastname);                  // ����� �л��� ���� ����Ѵ�.
    printf("st1.studentID = %d\n",st1.studenID);                 // ����� �л��� �й��� ����Ѵ�.
    printf("st1.grade = %c\n",st1.grade);                        // ����� �л��� ������ ����Ѵ�.

    student2 st2 = {'B',200,'B'};                                 // Ÿ���� ���� �ؼ� ���� ����ü��� ���� �� �ʿ䰡 ����. ����ü ����st2��  �л��� ��, �й�, ������ �����Ѵ�.

    printf("st2.lastname = %c\n",st2.lastname);               
    printf("st2.studentID = %d\n",st2.studenID);
    printf("st2.grade = %c\n",st2.grade);

    student2 st3;                                                 // ����ü ���� st3 ����

    st3 = st2;                                                    // ������ ġȯ���ش�.
    
    printf("st3.lastname = %c\n",st3.lastname);
    printf("str.studentID = %d\n", st3.studenID);
    printf("st3.grade = %c\n",st3.grade);

   
   /* i=humansEqual(st2,st3);                                     // �Լ��� ȣ���ؼ� ��ȯ���� i�� ����
    if(i==0)
      printf("�ٸ� ��� �Դϴ�.")
    else if(i==1)
      printf("���� ��� �Դϴ�.")
   
   */
    printf("--------------------------------------------------------------\n\n");
    printf("[---- [ �� �� �� ] [2018038014] -----]\n\n");
    
}

/*int humansEqual ( student2 person1, student2 person2)                   // ���� ������� �Ǻ��ϴ� �Լ�
{
    if (strcmp(person1.lastname, person2.lastname))
        return FALSE;
    if (person1.studenID != person2.studenID)
        return FALSE;
    if (person1.grade != person2.grade)
        return FALSE;
    return TRUE;
}*/