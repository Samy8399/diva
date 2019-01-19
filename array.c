int main()
{
	int a[10],n,k,i,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	 j=j+a[i];
	printf("%d",j);
}
	
