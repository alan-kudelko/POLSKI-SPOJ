#include <iostream>

using namespace std;

int main(){
    int testow;
    int liczb;
    int*tab;
    int bufor;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>liczb;
        tab=new int[liczb];
        for(int j=0;j<liczb;j++)
            cin>>tab[j];

        for(int j=0;j<liczb/2;j++){
            bufor=tab[j];
            tab[j]=tab[liczb-1-j];
            tab[liczb-1-j]=bufor;
        }
        for(int j=0;j<liczb;j++)
            cout<<tab[j]<<" ";
        cout<<endl;

        delete[]tab;
    }
    return 0;
}
