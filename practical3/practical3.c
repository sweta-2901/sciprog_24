#include<stdio.h>
#include<math.h>

void main(){
    int N = 12;
    float a = 0;
    float b = 60;
    float b_rad = (M_PI * 60) / 180;

    float sum = tan(a) + tan(b_rad);

    for(int i = 5; i < b; i= i+5)
    {
        sum = sum + 2 * tan((i*M_PI)/180);
    }

    sum = (b_rad-a)/(2*N) * sum;

    printf("Sum of tan(x)dx that ranges from 0 to pi/3 = %f \n", sum);
    printf("log(2) = %f \n", logf(2));
    float diff = logf(2) - sum;
    printf("The difference is %f \n", diff);

    float abs_diff = fabs(sum - logf(2));
    float rel_diff = fabs(1-(sum/logf(2)));

    printf("The absolute difference = %f\nThe relative difference = %f\n",abs_diff,rel_diff);
}

