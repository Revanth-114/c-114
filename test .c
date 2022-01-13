#include<stdio.h>
#include<math.h>
main()
{
	float ci,si,a,p,r,t,x;
	printf("enter principal amount :");
	scanf("%f",&p);
	printf("enter time :");
	scanf("%f",&t);
	printf("enter intrest :");
	scanf("%f",&r);
	char y;
	printf("do you want to calculate simple intrest(s) or compound intrest(c) :");
	scanf("%c",&y);
	if (y==115)
	    {
	    	 x=p*t*r;
   	    si=x/100;
   	    printf(" simple intrest is %.3f",si);
   	}
   	else if (y==100)
   	    {
		  	x=(1+r/100);
        a=p*(pow(x,t));
        ci=a-p;
   	    printf(" compund intrest is %.3f",ci);
    }
}