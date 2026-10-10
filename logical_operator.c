#include <stdio.h>
#include <conio.h>
int main()
{
    int x,y;
    printf("enter value of x:");
    scanf("%d",&x);
    printf("enter value of y:");
    scanf("%d",&y);
    if (x>y){
        printf("x is greater than y");

    }
    else if(x<y){
        printf("x is smaller than y");

    }
    else{
        printf("x and y are equal");
        return 0;
    }
}

