#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n) {

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;

    int i, j;
    for (i = 0; i < n; i++) {
        int rowSum = 0;
        for (j = 0; j < n; j++) {
            rowSum += square[i][j];
        }
        if (rowSum != M) {
            return 0;
        }
    }

    for (j = 0; j < n; j++) {
        int colSum = 0;
        for (i = 0; i < n; i++) {
            colSum += square[i][j];
        }
        if (colSum != M) {
            return 0;
        }
    }

    int mainDiagSum = 0;
    for (i = 0; i < n; i++) {
        mainDiagSum += square[i][i];
    }
    if (mainDiagSum != M) {
        return 0; 
    }

    int secDiagSum = 0;
    for (i = 0; i < n; i++) {
        secDiagSum += square[i][n - i - 1];
    }
    if (secDiagSum != M) {
        return 0; 
    }

    // If all checks passed, it is a magic square
    return 1;
}


