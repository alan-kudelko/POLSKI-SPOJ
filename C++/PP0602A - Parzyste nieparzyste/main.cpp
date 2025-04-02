#include <iostream>

using namespace std;

int main(){
    int testow;
    int liczb;
    int*tab;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>liczb;

        tab=new int[liczb];

        for(int j=0;j<liczb;j++)
            cin>>tab[j];

        for(int j=0;j<liczb-1;j+=2){
            cout<<tab[j+1]<<" ";
        }
        for(int j=0;j<liczb;j+=2){
            cout<<tab[j]<<" ";
        }

        cout<<endl;

        delete[]tab;
    }

    return 0;
}
