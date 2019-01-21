int main()
{
int a[20],b,i,j=0;
scanf("%d",&b);
for(i=0;i<b;i++)
 scanf("%d",&a[i]);
for(i=0;i<b;i++)
{
 if(a[i]>j)
 {
  j=a[i];
 }
}
printf("%d",j);
return 0;
