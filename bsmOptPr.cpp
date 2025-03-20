#include <cmath>
#include <iostream>

struct contract
{
    double premium;
    int dte; // days till expiry
    double delta;
    double gamma;
    double theta;
    double vega;
    double rho;
    double implied_volatility;
    double intrinsic_value; // strike price - current asset price
};


int main(){

    return 0;
}