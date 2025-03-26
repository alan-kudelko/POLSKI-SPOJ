#include <iostream>

using namespace std;

int main(){
    int liczb;
    int przesuniecie;
    int*tab;
    int bufor;

    cin>>liczb>>przesuniecie;

    tab=new int[liczb];

    for(int i=0;i<liczb;i++)
        cin>>tab[i];

    przesuniecie=przesuniecie%liczb;

    int i=0;
    for(int p=0;p<przesuniecie;p++){
        bufor=tab[0];
        for(i=1;i<liczb;i++){
            tab[i-1]=tab[i];
        }
        tab[liczb-1]=bufor;
    }
    for(int i=0;i<liczb;i++)
        cout<<tab[i]<<" ";
    cout<<endl;

    delete[]tab;


    return 0;
}


