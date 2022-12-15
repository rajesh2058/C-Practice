//Recursive function
/*   N natural numbers */

#include <stdio.h>

int fxn(int n);
int fxn(int n)
{    printf("\n%d",n);
    if (n>1)
    {
        
        return fxn(n-1);
    }
    
    else
    {
        return 1;
    }
    
}

int main()
{
    int n;
    printf("Enter num:\n");
    scanf("%d",&n);
    fxn(n);
    
    return 0;
}