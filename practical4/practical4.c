#include <stdio.h>
#include <math.h>

int N = 12;
float tan_arr[12];
float area();
float degtorad(int deg);

void main(){
	float ar;
	float deg;
    	for(int i=0; i<N; i++){
		deg = i * 5;
        	tan_arr[i] = tan(degtorad(deg));
		printf("tan_arr[%d] = %f\n", i, tan_arr[i]); 
    	}
    	ar = area();
    	printf("Area using Trapezoidal rule is : %f\n", ar);
    	printf("Actual area is : %f\n", logf(2));
}

float degtorad(int deg){
	float rad = (deg * M_PI) / 180;
    	return rad;
}

float area(){
	float a = 0;
	float b = 60;
	float b_rad = degtorad(b);
	float area = tan_arr[0] + tan_arr[N];
	for(int i=1; i<N; i++){
		area = area + 2 * tan_arr[i];
	}

	area = (b_rad-a)/(2*N) * area;
	return area;
}
