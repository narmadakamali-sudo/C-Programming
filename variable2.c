#include <stdio.h>
#include <conio.h>
int main()
{
    int sub1,sub2,sub3,total_marks;
    printf("enter subject 1 mark:");
    scanf("%d",&sub1);
    printf("enter subject 2 mark:");
    scanf("%d",&sub2);
    printf("enter subject 3 mark:");
    scanf("%d",&sub3);
    total_marks=sub1+sub2+sub3;
    printf("total marks =%d",total_marks);
    return 0;
}
