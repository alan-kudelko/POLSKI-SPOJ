#include <iostream>

using namespace std;

int main(){
    int testow;
    long long l;
    long long c;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>l>>c;
        if(1==l)
            cout<<"TAK"<<endl;
        else
        cout<<(c%((l-1))?"TAK":"NIE")<<endl;
    }
    return 0;
}
