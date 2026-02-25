/*
There are 3 logical operators: 1)!(Not operator) - unary
                               2)&&(and operator) - binary
                               3)||(or operator) - binary
-Operand can be anything but any non zero value treated as 0.
-These operators result can be 0/1.
-These operators can not modify operands.

-Truth table:-

!  a  b  a&&b  a||b
1  0  0   0     0
1  0  1   0     1
0  1  0   0     1 
0  1  1   1     1  
*/

#include<stdio.h>
void main() 
{
	int i=10,j=20,r;
	r= i && j;
	printf("r=%d\n",r);
	
}                 
