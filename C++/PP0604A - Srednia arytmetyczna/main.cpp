#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int*tab;
    int testow;
    int liczb;
    int najblizsza;
    float srednia;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>liczb;
        srednia=0;

        tab=new int[liczb];
        for(int j=0;j<liczb;j++){
            cin>>tab[j];
            srednia+=tab[j];
        }
        srednia/=liczb;

        najblizsza=tab[0];
        for(int j=1;j<liczb;j++){
            if(fabs(srednia-tab[j])<fabs(srednia-najblizsza))
                najblizsza=tab[j];
        }
        cout<<najblizsza<<endl;

        delete[]tab;
    }

    return 0;
}
