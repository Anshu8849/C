//write a program to convert celsius to fahrenheit.


#include<stdio.h>
int main()
{

	float celsius;
	
printf("Enter a value of celsius:\n");
scanf("%f",&celsius);

	float f;

	f = (celsius*(9.0/5.0) + 32.0);

printf("the value of fahrenheit is :%f\n",f);

	return 0;
}

