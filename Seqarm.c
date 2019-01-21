int main()
{
long int e,c,p,a,i,b=0,n,d=0,z,j;

scanf("%ld%ld",&a,&z);
for(j=a+1;j<z;j++)
	{
	//printf("%d",j);
		a=j;
		b=0;
		d=0;
n=a;
c=a;
while(c)
{
c=c/10;
b++;
}
//printf(".%d",b);
while(a)
{
i=a%10;
p=1;
e=b;
 while(e)
 {
 p=p*i;
 e--;
 }
 d=d+p;
 a=a/10;
}
if(n==d)
{
printf("%d",n);
}
}
}
