#include <iostream>

using namespace std;

int main(){
    const int sekund_w_dobie=86400;
    int testow;
    long long sumaCiastek=0;
    int pudelek;
    int n;
    int t;

    long long m;

    cin>>testow;
    for(int i=0;i<testow;i++){
        cin>>n>>m;

        for(int j=0;j<n;j++){
            cin>>t;
            sumaCiastek+=sekund_w_dobie/t;
        }

        if(sumaCiastek%m)
            pudelek=sumaCiastek/m+1;
        else
            pudelek=sumaCiastek/m;

        cout<<pudelek<<endl;

        sumaCiastek=0;
    }

    return 0;
}
