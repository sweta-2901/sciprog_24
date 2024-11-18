#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int factorial(int x);

void main(){
        int order;
        double *terms;

        printf("Enter the order of the polynomial : \n");
        scanf("%d", &order);

        terms = (double *)malloc(order * sizeof(double));

        for(int i = 0; i<order; i++)
        {
                terms[i] = 1.0 / factorial(i+1);
		printf("%.16lf\n", terms[i]);
        }

        double e = 1.0;
        for(int i = 0; i < order; i++)
        {
                e = e + terms[i];
        }
        free(terms);

        printf("e is estimated as %.16lf, with difference %e \n", e, e - exp(1.0));

}

int factorial(int x){
        if(x < 0){
                printf("Positive number is required \n");
                return(-1);
        }
        else if(x == 0){
                return 1;
        }
        else{
                return(x * factorial(x-1));
        }
}

