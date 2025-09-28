#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    double N;
    cout << "Enter a positive number: ";
    cin >> N;

    double a = 0;
    double b = (N >= 1) ? N : 1;
    double m;
    double tolerance = 0.01;

    while (true) {
        m = (a + b) / 2;
        double f = m*m - N;

        if (fabs(f) < tolerance) break;  

        double fa = a*a - N;
        if ((f > 0 && fa > 0) || (f < 0 && fa < 0))
            a = m; 
        else
            b = m; 
    }

    cout << "Approx square root: " << m << endl;
    return 0;
}