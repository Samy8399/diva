int main()
{
 int a,i,temp1,temp2,l=1,rem,c=1,sum=0;
scanf("%d",&a);
temp1=a;
temp2=a;
while(a!=0)
{
a=a/10;
l++;
}
while(temp1>0)
{
rem=temp1%10;
for(i=0;i<l;i++)
{
c=c*rem;
}
sum=sum+c;
temp1=temp1/10;
}
printf("%d",sum);
if(temp2=sum)
{
printf(" yes");
}
else
{
printf("no");
}
return 0;
}
