// WAP to scan one char from user.

#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character:\n");
	scanf("%c",&ch);

	if (ch>='a' && ch<='z')
	printf("char is:%c....ascii is:%d\n",ch,ch);



}
