#include <iostream>
#include <algorithm>

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
        sort(tab,tab+liczb);
        reverse(tab,tab+liczb);

        int j=0;
        for(;((j<liczb)&&(tab[0]==tab[j]));j++);

        sort(tab+j,tab+liczb);

        for(int j=0;j<liczb;j++){
            cout<<tab[j]<<" ";
        }
        cout<<endl;

        delete[]tab;
    }

    return 0;
}
