#include<stdio.h>
void main()
{
	int i=0,j=20,r;
	r = i||(j=200);

	printf("r=%d\n",r);
	printf("i=%d j=%d\n",i,j);
}
