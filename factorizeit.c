#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num>1)
    {
            for(i=2; i<=num; i++)
            {
                if(num%i==0)
                {
                    printf("A factor of %d is %d\n", num, i);
                }
            }
    }
    if(num==1)
    {
        printf("Huh *smirks*");
    }
    if(num<=0)
    {
        printf("Enter a positive non-zero number");
    }
    return 0;
}
