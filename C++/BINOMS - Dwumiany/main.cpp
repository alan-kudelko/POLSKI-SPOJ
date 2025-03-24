#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int testow;
    long n,k;
    long long wynik=1;
    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>n>>k;

        wynik=1;
        k=(k<(n-k))?k:(n-k);
        for(long long j=1;j<=k;j++)
            wynik=wynik*(n+1-j)/j;


        cout<<wynik<<endl;
    }

    return 0;
}
