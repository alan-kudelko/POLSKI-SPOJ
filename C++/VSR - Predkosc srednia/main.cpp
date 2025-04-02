#include <iostream>

using namespace std;

int main(){
    int testow;
    int v1;
    int v2;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>v1>>v2;
        cout<<2*v1*v2/(v1+v2)<<endl;
    }
    return 0;
}
