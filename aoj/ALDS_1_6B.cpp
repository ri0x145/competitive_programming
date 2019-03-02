#include <iostream>
#include <cstdio>

int partition (int A[], int p, int r) {
    int x, t, i, j;

    x = A[r];
    i = p-1;
    for (j = p ; j < r ; j ++ ) {
        if (A[j] <= x) {
            i++;
            t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
    }

    t = A[i+1];
    A[i+1] = A[r];
    A[r] = t;
    return i+1;
}

int main (void) {
    int n, i , q , A[100010];

    scanf("%d", &n);

    for (i = 0 ; i < n ; i++) {
        scanf("%d", &A[i]);
    }

    q = partition(A, 0, n-1);

    for (i = 0 ; i < n ; i++) {
        if (i) printf(" ");

        if(i == q) printf("[");
        printf("%d", A[i]);
        if(i == q) printf("]");
    }
    printf("\n");

    return 0;
}

