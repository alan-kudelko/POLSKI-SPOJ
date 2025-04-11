#include <iostream>

using namespace std;

int main(){
    char warunek;
    short rozmiarTab;
    long*dane;
    long liczba;

    cin>>rozmiarTab;

    dane=new long[rozmiarTab];

    for(short i=0;i<rozmiarTab;i++){
        cin>>dane[i];
    }
    cin>>warunek>>liczba;

    for(short i=0;i<rozmiarTab;i++){
        if(warunek=='>'){
             if(dane[i]>liczba)
                cout<<dane[i]<<endl;
        }
        else{
            if(dane[i]<liczba)
                cout<<dane[i]<<endl;
        }
    }

    delete[]dane;

    return 0;
}
