//post-decrement inside printf()

#include<stdio.h>
int main()
{
	int x=5;
	printf("%d\n",x);
	printf("%d\n",x--);
	printf("%d\n",x);
	return 0;
}
