#include<stdio.h>

int n = 5;
int p = 3;
int q = 4;

void matrixmultiply(double a[n][p], double b[p][q], double c[n][q]);
void main(){
    double a[n][p], b[p][q], c[n][q];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            a[i][j] = i+j;
            printf("%f  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            b[i][j] = i-j;
            printf("%f  ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for(int i=0; i<n; i++){
        for(int j=0; j<q; j++){
            c[i][j] = 0.0;
        }
    }
    
    matrixmultiply(a, b, c);
}

void matrixmultiply(double a[n][p], double b[p][q], double c[n][q]){
    
    for(int i=0; i<n; i++){
        for(int j=0; j<q; j++){
            for(int k=0; k<p; k++){
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
            printf("%f  ", c[i][j]);
        }
        printf("\n");
    }
}
