#include<stdio.h>

int main() {
    int a,b,c=0,d,e,f,i=2,j,k,l;
    scanf("%d",&a);
    b=1;
    j=2;
    while(1)
    {
        c=c+(b*12);
        i=i+2;
        if(a>=c)
        {
        printf("%d",(i*4));
        break;
        }
        b=b+j*j;
        j++;
    }
}    
