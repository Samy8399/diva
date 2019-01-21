int main()
{
int a[25],b,i,j;
scanf("%d",&b);
for(i=0;i<b;i++)
 scanf("%d",&a[i]);
j=a[0];
for(i=0;i<b;i++)
 {
  if(a[i]<j)
   j=a[i];
  }
printf("\n%d",j);
return 0;
}
  
