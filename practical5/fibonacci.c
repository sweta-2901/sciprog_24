#include<stdio.h>
#include<stdlib.h>

void fib(int *a, int *b);

int main(void)
{
        int n;
        printf("Enter a positive integer : ");
        scanf("%d",&n);
        if(n < 1){
                printf("n should be a positive integer");
                exit(1);
        }

        int a = 0;
        int b = 1;

        printf("The Fibonacci series is : \n");
        printf("%d, %d ", a, b);
        int i;
        for(i=2; i <= n; i++){
               fib(&b, &a);
               printf("%d ", b);
               if((i+1) % 10 == 0){
                       printf("\n");
               }
        }
        return 0;
}

void fib(int *a, int *b){
        int next;
        next = *a + *b;

        *b = *a;
        *a = next;
}

