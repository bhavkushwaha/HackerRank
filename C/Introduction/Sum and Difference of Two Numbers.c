#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,sum,diff;
    float c,d,sum2,diff2;
    scanf("%d %d\n",&a,&b);
    sum = a+b;
    diff = a-b;
    scanf("%f %f\n",&c,&d);
    sum2 = c+d;
    diff2 = c-d;
    printf("%d %d\n",sum,diff);
    printf("%0.1f %0.1f\n",sum2,diff2);
    return 0;
}
