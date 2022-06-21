#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
int var;
scanf("%d",&var);
    if(var>0)
    {
    if(var<=9)
    {
    if(var==1)
    printf("one");
    if(var==2)
    printf("two");
    if(var==3)
    printf("three");
    if(var==4)
    printf("four");
    if(var==5)
    printf("five");
    if(var==6)
    printf("six");
    if(var==7)
    printf("seven");
    if(var==8)
    printf("eight");
    if(var==9)
    printf("nine");
    }
    else 
    printf("Greater than 9");
    }
    return 0;
}