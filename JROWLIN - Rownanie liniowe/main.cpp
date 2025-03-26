#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a,b,c;
    double x;
    double y;

    cin>>a>>b>>c;

    if(a){
        x=-(b-c)/a;
        cout<<showpoint<<fixed<<setprecision(2)<<x<<endl;
    }
    else{
        if(!(b-c))
            cout<<"NWR"<<endl;
        else
            cout<<"BR"<<endl;
    }

    return 0;
}
