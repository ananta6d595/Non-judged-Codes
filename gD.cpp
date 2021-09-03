#include<iostream>
#include<cmath>

#define Conv_limit 0.5  ///////////// convergence limit
#define M 7


using namespace std;


int x[M] = {1, 2, 3, 4, 5, 6, 7};
int y[M] = {2, 4, 6, 7, 10, 13, 15};



double alpha = 0.09;


double J(double theta0, double theta1){   //cost function j
    double Jcost = 0;

    for(int i = 0; i < M; i++){
        Jcost = Jcost + pow(( y[i] - theta0 - ( theta1 * x[i] ) ),2); // mean square error
    }
    return Jcost / ( 2.00 * M );
}



int main(){

    long double theta0 = 0;
    long double theta1 = 0;

    cout<< "Initial theta0 = " << theta0 << endl;
    cout<< "Initial theta1 = " << theta1 << endl;
    cout << "Cost0 = " << J(theta0, theta1) <<endl << endl;

    int k= 1;

    while( J(theta0, theta1) > Conv_limit ){
        /////////////////////
        double t0 = 0;

        for(int i = 0; i < M; ++i){
            t0 = t0 - ( y[i] - (theta0 + (theta1 * x[i])) );
        }
        t0 = t0 / M;

        //////////////////////////////////
        double t1 = 0;


        for(int i = 0; i < M; ++i){
            t1 = t1 - ( ( y[i] - (theta0 + (theta1 * x[i])) ) * x[i] );
        }
        t1 = t1 / M;


        theta0 = theta0 - alpha * t0;
        theta1 = theta1 - alpha * t1;

    cout << "Cost"<< k++ <<" = " << J(theta0, theta1) <<endl << endl;


    }


    cout << "Initial Hypothesis: y = "<< theta0<< " + " <<theta1 <<"x" << endl << endl;
    cout << "COST:" << J(theta0, theta1);

    return 0;
}
