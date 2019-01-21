int main()
{
int a[25],b,i,j,t;

scanf("%d",&b);
for(i=0;i<b;i++)
 scanf("%d",&a[i]);
for(i=0;i<b;i++)
{
 for(j=i+1;j<b;j++)
 {
 if(a[j]<a[i])
  {
   t=a[j];
   a[j]=a[i];
   a[i]=t;
  }
 }
}
for(i=0;i<b;i++)
 printf("%d\t",a[i]);
return 0;
}
