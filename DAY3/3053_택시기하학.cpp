#include <iostream>
#include <cmath>
using namespace std;

double one(double n) {
    return n*n*M_PI;
}
double taxione(double n) {
    return 2*n*n;
}

int main() {
    double n; cin >> n;
    cout << fixed; cout.precision(6);
    cout << one(n) <<"\n" << taxione(n) << "\n";
}

/*
int main() {
    double r;
    cout << fixed; cout.precision(6);
    cout << r*r*3.14159265358979 <<"\n"<< r*r*2;
}
 */
