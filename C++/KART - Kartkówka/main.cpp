#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int testow;
    int n;
    int k;
    int sumaZer;
    cin>>testow;
    for(int i=0;i<testow;i++){
        cin>>n;
        sumaZer=0;
        for(int j=0;n>=pow(5,j+1);j++){
            sumaZer+=floor(n/pow(5,j+1));
        }
        cout<<sumaZer<<endl;
    }
    return 0;
}
