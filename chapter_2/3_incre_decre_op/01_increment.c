/*
increment operator : ++
This is unary operator because they operate on a single operand.
This operator increments the value of variable by 1.
Two types of increments:
    1.Pre increment(++a):First increase the value and then returns the updated value.
    2.post increment(a++):First returns the current value and then increases the value.
*/

#include<stdio.h>
int main()
{
	int x=5;
	x++;
	printf("x=%d\n",x);
	return 0;
}
