#include <iostream>

using namespace std;

int main(){
    int testow;
    int liczb;
    float suma=0;
    float liczba;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>liczb;

        for(int j=0;j<liczb;j++){
            cin>>liczba;
            suma+=liczba;
        }
        cout<<suma<<endl;

        suma=0;
    }


    return 0;
}
