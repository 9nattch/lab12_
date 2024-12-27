#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double A[], int N, double B[]){
    double sum = 0.0 , variance = 0.0, geomean = 1.0, harmo = 0;
    double mean, std_deviation, Geometric_mean, Harmonic_mean, Max = A[0], Min = A[0];
    
for(int i = 0; i < N; i++){
    sum += A[i];
 }
    mean = sum/N;

for (int i = 0; i < N; i++){
    variance += pow((A[i] - mean),2);
    std_deviation = sqrt(variance / N);
    geomean *= A[i];
    Geometric_mean = pow(geomean, 1.0/N);
    harmo += 1.0 / A[i];
    Harmonic_mean = N / harmo;

}
for(int i = 1; i < N; i++){
    if (A[i] > Max){
        Max = A[i];
    }if (A[i] < Min){
    Min = A[i];
}
}
B[0] = mean;
B[1] = std_deviation;
B[2] = Geometric_mean;
B[3] = Harmonic_mean;
B[4] = Max;
B[5] = Min;
}
