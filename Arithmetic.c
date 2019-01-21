int main()
{
	int a,n,d,i,j=0,t;
	scanf("%d%d%d",&a,&n,&d);
	if(d<a)
	{
		t=d;
		d=a;
		a=t;
	}
	for(i=a;i<=d;i++)
	{
		j=j+i;
	}
	printf("%d",j);
}
	
