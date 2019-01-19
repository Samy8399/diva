int main()
{
	char a;
	scanf("%c",&a);
	if(((a>=65)&&(a<=90))||((a>=97)&&(a<=122)))
	{
	if((a=='a')||(a=='A'))
	 printf("Vowel");
	else if((a=='e')||(a=='E'))
	 printf("Vowel");
	else if((a=='i')||(a=='I'))
	 printf("Vowel");
	else if((a=='o')||(a=='O'))
	 printf("Vowel");
	else if((a=='U')||(a=='u'))
	 printf("Vowel");
	else
	 printf("Consonent");
	}
	else
		printf("Invalid");
	return 0;
}
