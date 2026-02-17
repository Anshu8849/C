// write a c programm to calculate area of a rectangle:(a)using hard coded inputes(b)using inputes suplied by the user

#include<stdio.h>
int main()
{

	int length, breadth;

printf("Enter value of Length:\n");
scanf("%d", &length);


printf("Enter value of Breadth:\n");
scanf("%d", &breadth);

printf("The area of rectangle is:%d\n",length*breadth);

	return 0;

}
