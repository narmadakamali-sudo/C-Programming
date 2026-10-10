#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    printf("enter value of age:");
    scanf("%d",&age);
    if(age>=18&&age<=60){
        printf("eligible");
    }
    else{
        printf("not eligible");
        return 0;
    }
}
