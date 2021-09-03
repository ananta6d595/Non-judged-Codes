#include<stdio.h>
#include<string.h>


int main()
{
    int num[10];

    int temp;
    int i, n, j, x;
    printf("\nHow many number you want to enter: ");
        scanf("%d", &n);

    printf("\nEnter a list of numbers to see all combinations: ");
    for (i = 0 ; i < n; i++)
        scanf("%d", &num[i]);
    for (j = 1; j <= n; j++) {
        for (i = 0; i < n-1; i++) {
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
            for ( x = 0 ; x < n ; x++)
                printf("%d ", num[x]);
            printf("\n");
	}
    }
    return 0;
}
