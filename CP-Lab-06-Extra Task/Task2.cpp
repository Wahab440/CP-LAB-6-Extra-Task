#include <iostream>
using namespace std;
int main() {
    int x, numTerms;
    cout << "Input the value of x: ";
    cin >> x;
    cout << "Input number of terms: ";
    cin >> numTerms;
    int seriesSum = 0;
    int term = x;
    int sign = 1;
    cout << "The values of series:" << endl;
    for (int i = 1; i <= numTerms; ++i) {
        cout << term << endl;
        seriesSum += term;
        sign = -sign; 
        term *= -1 * x * x; 
    }
    cout << "The sum of the series up to " << numTerms << " term is: " << seriesSum << endl;
    return 0;
}



