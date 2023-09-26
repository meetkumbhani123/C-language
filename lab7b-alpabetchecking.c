#include<stdio.h>
void  main()
{
	char ch;
	
	printf("Enter Character: ");
	scanf("%c",&ch);
	
	(ch >= 'a' && ch<='z') || (ch >= 'A' && ch <= 'Z')
		? printf("%c is Alphabet",ch)
		: printf("%c is not Alphabet",ch);
	
	
}