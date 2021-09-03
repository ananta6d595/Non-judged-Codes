#include <stdio.h>
#include <stdlib.h>

int RLinearSearch(int A[], int n, int key) {
    if(n<0) { // Base case - not found
        return -1;
    }
    if(A[n]==key) { // Base case - found
        return n;
    }
    // Recursive case
    return RLinearSearch(A, n-1, key);
}

int main(void)
{
    int A[5]={23,41,22,15,32};   // Array Of 5 Elements
    int pos,n=5, x=41;

    pos=RLinearSearch(A,n,x);

    if (pos != -1)
       printf("Element %d is present at index %d", x, pos);
    else
        printf("Element %d is not present", x);
    return 0;
}
