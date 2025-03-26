#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double r,d;
    double pole;
    const double PI=3.141592654;

    cin>>r>>d;

    pole=M_PI*pow((tan(acos(d/(2*r))))*d,2)/4;

    cout<<setprecision(10)<<pole<<endl;

    return 0;
}
