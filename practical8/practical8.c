#include <stdio.h>

int iterativeGCD(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int recurssiveGCD(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        recurssiveGCD(b, a%b);
    }
}

void main()
{
    int a, b, iterativegcd, recurssivegcd;

    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    if(a <= 0 || b <= 0)
    {
        printf("It ia a negative integer. Enter a positive integer.");
    }

    iterativegcd = iterativeGCD(a,b);
    recurssivegcd = recurssiveGCD(a,b);

    printf("Iterative GCD = %d", iterativegcd);
    printf("\nRecurssive GCD = %d", recurssivegcd);
    printf("\n");
}
