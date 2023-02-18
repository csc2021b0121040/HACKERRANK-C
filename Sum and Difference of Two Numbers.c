#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,s,m;
    float c,d,k,h;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    s=a+b;
    m=a-b;
    k=c+d;
    h=c-d;
    
    printf("%d %d\n",s,m);
    printf("%.1f %.1f ",k,h);
    
    return 0;
}
