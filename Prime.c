int main()
{
	int a,b,i,j=0;
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
		  j=1;
		  break;
		 }
		else
		 j=0;
	}
	if(j==0)
	 printf("yes");
	else
	 printf("No");
}
