#include<stdio.h>
#include<windows.h>
#define M 5
#define TOLERANCE 0.3

int x[M] = {1, 2, 3, 4, 5};
int y[M] = {2, 4, 6, 6, 10};


float alpha = 0.1;


float J(float theta0, float theta1){
    float Jerror = 0;

    for(int i = 0; i < M; ++i){
        Jerror = Jerror + ( y[i] - theta0 - ( theta1 * x[i] ) ) * ( y[i] - theta0 - ( theta1 * x[i] ) );
    }
    return Jerror / ( 2 * M );
}



int main(){

    float theta0 = 0;
    float theta1 = 0;

    printf("Initial Hypothesis: y = %f + %fx\n", theta0, theta1);
    printf("Error: %f\n", J(theta0, theta1) );


    while( J(theta0, theta1) > TOLERANCE ){
        //
        float temp0 = 0;
        for(int i = 0; i < M; ++i){
            temp0 = temp0 - ( y[i] - theta0 - (theta1 * x[i]) );
        }

        temp0 = temp0 / M;


        //
        float temp1 = 0;
        for(int i = 0; i < M; ++i){
            temp1 = temp1 - ( ( y[i] - theta0 - (theta1 * x[i]) ) * x[i] );
        }
        temp1 = temp1 / M;



        //Sleep(1000);
        //printf("DEBUG\n");


        //
        theta0 = theta0 - alpha * temp0;
        theta1 = theta1 - alpha * temp1;


    }


    printf("DONE\n");
    printf("Initial Hypothesis: y = %f + %fx\n", theta0, theta1);
    printf("Error: %f\n", J(theta0, theta1) );

    return 0;
}
