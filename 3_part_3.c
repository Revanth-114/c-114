#include<stdio.h>
main()
{
	int a,b,temp;
    printf("enter a and b values");
 	scanf("%d%d", &a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d\n%d",a,b);
}
