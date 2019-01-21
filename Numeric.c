int main()
{
	int i,j=0,b;
	char a[10];
	gets(a);
	for(i=0;a[i]!='\0';i++);
	b=i;
	for(i=0;i<b;i++)
	{
		if(a[i]==' ')
		{
		}
		else
		{
	if(((a[i]>=48)&&(a[i]<=57))||(a[i]=='.'))
		{
			j=1;
		}
	else
	{
		j=0;
		break;
	}
    }
    }
if(j==1)
    printf("Numeric");
else
    printf("Non Numeric");
return(0);
    }
