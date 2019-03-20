#include<stdio.h>
void main()
{
 int a[100],b,c,d,e,f,i,j,k,l;
 scanf("%d",&b);
 for(i=0;i<b;i++)
 scanf("%d",&a[i]);
 for(i=0;i<b-1;i++)
 {
   if(a[i]>a[i+1])
   {
    c=a[i];
    a[i]=a[i+1];
    a[i+1]=c;
    for(j=i;j>0;j--)
    {
      if(a[j]>a[j-1])
      {
	d=a[j];
	a[j]=a[j-1];
	a[j-1]=d;
      }
    }
  }
}
for(i=0;i<b;i++)
printf("%d",a[i]);
}
