#include<stdio.h>
main()
{
	int dividend,divisor,quotient,remainder;
	printf("enter the dividend: ");
	scanf("%d",&dividend);
	printf("enter the divisor");
	scanf("%d",&divisor);
	quotient=dividend/divisor;
	remainder=dividend-(divisor*quotient);
	printf("the quotient and remainder are %d and %d",quotient,remainder);
}
