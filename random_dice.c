#include<stdio.h>
#include<time.h>

int main()
{

        int sum, dice1, dice2, actual = 0;

        int Total[7][7]= {{0},{0}};
        srand(time(NULL));

		for (int i = 0; i < 36000; i++) {
			dice1 = rand()%6 + 1;
			dice2 =  rand()%6 + 1;
			Total[dice1][dice2]++;
		}

		printf("          1       2       3       4       5       6 \n");

		for (int i = 1; i < 7; i++){
            printf("%d      ", i+1);
        for(int j=1; j<7; j++)
            {
                printf("%d      ", Total[i][j]);
            }
        printf("\n");
		}

    return 0;
}

