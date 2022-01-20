
#include <stdio.h>


check()
{
    int a;
    printf("%d",a);
}

int main()
{
   extern int a;

    printf("%d",a);
    
    check();
    
    return 0;
    
}
