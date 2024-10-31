#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double artanh1(double x, double delta);
double artanh2(double x);

int main(void){
	double delta;
	double maclaurin_result, log_result;
	printf("Enter a positive real number : ");
	scanf("%lf", &delta);
	
	if(delta < 0){
		printf("Delta was negative.\n");
		exit(1);
	}
	else{
		for(double i = -0.9; i <= 0.9; i = i + 0.01) {
			maclaurin_result = artanh1(i, delta);
            		log_result = artanh2(i);
			printf("For x = %.2f, artanh1 = %.10f and artanh2 = %.10f\n", i, maclaurin_result, log_result);
		}
	}
	return 0;
}

double artanh1(double x, double delta)
{
    double result = 0.0;
    double exp = x;
    int n = 0;

    while (fabs(exp) >= delta) {
        result += exp;
        n++;
        exp = pow(x, 2 * n + 1) / (2 * n + 1);
    }

    return result;
}

double artanh2(double x) 
{
    return 0.5 * (log(1 + x) - log(1 - x));
}
