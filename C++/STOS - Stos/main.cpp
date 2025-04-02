#include <iostream>

using namespace std;

int main(){
    int stos[10]={0};
    int wsk=0; //gora stosu
    char znak;
    int liczba;

    while(cin>>znak){
        if('+'==znak){
            cin>>liczba;
            if(wsk<10){
                stos[wsk]=liczba;
                wsk++;
                cout<<":)"<<endl;
                continue;
            }
            cout<<":("<<endl;
        }
        if('-'==znak){
            if(wsk){
                cout<<stos[--wsk]<<endl;
                continue;
            }
            cout<<":("<<endl;
        }

    }
    return 0;
}
