#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]) {
double sum = 0 ,  SD = 0 , GM = 1 , HM = 0, max = A[0] , min = A[0];


for (int i = 0 ; i < N ; ++i){
    sum += A[i] ;
    GM *= A[i] ;
    SD += pow(A[i],2) ;
    HM += 1/A[i] ;
}


for (int i = 0 ; i < N ; ++i){
if (A[i] > max) max = A[i];
if (A[i] < min) min = A[i];
}

B[0] = sum/N ;
B[1] = sqrt(SD/N - pow(sum/N,2));
B[2] = pow(GM,1.0/N); 
B[3] = N / HM;
B[4] = max;
B[5] = min;

}

