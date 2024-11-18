#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int *allocatearray(int n);
void fillwithones(int *p, int n);
void printarray(int *p, int n);
void freepointer(int *p);

void main()
{
	int size;
	printf("Enter the size : \n");
	scanf("%d", &size);
	int *array;
	array = allocatearray(size);
	fillwithones(array, size);
	printarray(array, size);
	freepointer(array);
}

int *allocatearray(int n){
	return ((int *)malloc(n * sizeof(int)));
}

void fillwithones(int *p, int n){
	int i;
	for(i = 0; i<n; i++){
		p[i] = 1;
	}
}

void printarray(int *p, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d", p[i]);
	}
	printf("\n");
}

void freepointer(int *p)
{
	free(p);
}
