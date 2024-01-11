#include <iostream>
using namespace std;

double calculateSeriesSum(int n) {
    double sum = 0.0;
    double term = 1.0;

    for (int i = 1; i <= n; ++i) {
        double power = 1.0;
        for (int j = 1; j <= i; ++j) {
            power *= i; 
        }
        term = 1.0 / power;
        sum += term;
        cout << "1/" << i << "^" << i << " = " << term << endl;
    }
    return sum;
}

int main() {
    int nthTerm;
    cout << "Input the value for nth term: ";
    cin >> nthTerm;

    double seriesSum = calculateSeriesSum(nthTerm);
    cout << "The sum of the above series is: " << seriesSum << endl;

    return 0;
}
