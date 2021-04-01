#include<stdio.h>
#include<stdlib.h>
#define FALSE 0
#define TRUE 1
//int humansEqual (student2 person1, student2 person2);



struct student1                                                  // 타입을 정의하지 않은 학생의 성, 학점, 학번을 담는 구조체
{
    char lastname;                                               // 학생의 성을 담을 문자형 변수
    int studenID;                                                // 학생의 학번을 담을 정수형 변수
    char grade;                                                  // 학생의 학점을 담을 문자형 변수
};

typedef struct                                                   // 타입을 정의한 구조체
{
    char lastname;
    int studenID;
    char grade;    
}student2;

int main()
{
    int i;
    struct student1 st1 = {'A',100,'A'};                         //타입을 정의 하지 않아서 앞에 struct를 붙혀야한다. 구조체 변수 st1에 A, 100 , A를 저장한다.

    printf("st1.lastname = %c\n",st1.lastname);                  // 저장된 학생의 성을 출력한다.
    printf("st1.studentID = %d\n",st1.studenID);                 // 저장된 학생의 학번을 출력한다.
    printf("st1.grade = %c\n",st1.grade);                        // 저장된 학생의 학점을 출력한다.

    student2 st2 = {'B',200,'B'};                                 // 타입을 정의 해서 따로 구조체라고 정의 할 필요가 없다. 구조체 변수st2에  학생의 성, 학번, 학점을 저장한다.

    printf("st2.lastname = %c\n",st2.lastname);               
    printf("st2.studentID = %d\n",st2.studenID);
    printf("st2.grade = %c\n",st2.grade);

    student2 st3;                                                 // 구조체 변수 st3 선언

    st3 = st2;                                                    // 구조를 치환해준다.
    
    printf("st3.lastname = %c\n",st3.lastname);
    printf("str.studentID = %d\n", st3.studenID);
    printf("st3.grade = %c\n",st3.grade);

   
   /* i=humansEqual(st2,st3);                                     // 함수를 호출해서 반환값을 i에 저장
    if(i==0)
      printf("다른 사람 입니다.")
    else if(i==1)
      printf("같은 사람 입니다.")
   
   */
    printf("--------------------------------------------------------------\n\n");
    printf("[---- [ 김 윤 희 ] [2018038014] -----]\n\n");
    
}

/*int humansEqual ( student2 person1, student2 person2)                   // 같은 사람인지 판별하는 함수
{
    if (strcmp(person1.lastname, person2.lastname))
        return FALSE;
    if (person1.studenID != person2.studenID)
        return FALSE;
    if (person1.grade != person2.grade)
        return FALSE;
    return TRUE;
}*/