#include<stdio.h>

int main()
{
int a,rem;
scanf("%d",&a);
while(a)
{
    rem=a%10;
    printf("%d",rem);
    a=a/10;
}
return 0;
}
