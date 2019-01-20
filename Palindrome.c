int main()
{
	int a,r,b=0,i;
	scanf("%d",&a);
	i=a;
	while(a)
	{
		r=a%10;
		b=(b*10)+r;
		a=a/10;
	}
	if(b==i)
	 printf("Yes");
	else
	 printf("No");
	return 0;
}
