#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s [20];
    char sen [50];
    scanf("%c\n",&ch);
    scanf("%s\n",s);
    scanf("%[^\n]%*c\n",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen); 
    return 0;
}
