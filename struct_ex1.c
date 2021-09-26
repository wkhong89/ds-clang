#include <stdio.h>
#include <string.h>

// 구조체 template
struct std_info {
    char name[10]; //학생 이름
    int grade;     // 학년
    double  gpa;   // 성적
};

typedef struct std_info std;

int main(void)
{
    //struct std_info Kim;
    std DS_stds[5];

    strcpy(DS_stds[0].name, "Kim");
    DS_stds[0].grade = 2;
    DS_stds[0].gpa = 4.0;
    strcpy(DS_stds[1].name, "Lee");
    DS_stds[1].grade = 2;
    DS_stds[1].gpa = 4.3;
    strcpy(DS_stds[2].name, "Park");
    DS_stds[2].grade = 2;
    DS_stds[2].gpa = 3.3;

    std *p = DS_stds;

    printf("%s\n", p->name);
    printf("%s\n", (p+1)->name);


    return 0;
}