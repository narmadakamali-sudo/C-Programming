#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
int main()
{
    int x,y;
    printf("enter value of x:");
    scanf("%d",&x);
    printf("enter value of y:");
    scanf("%d",&y);
    bool isequal= x==y;
    if(isequal){
        printf("x and y are equal");
    }
      printf("not equal");
      return 0;

}
