#include <iostream>

using namespace std;

int main(){
    int testow;
    int licznik=0;
    int pozycja=0;
    string napis;
    char szukany;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>napis;

        for(int j=0;j<napis.size()+1;j++){
            szukany=napis[pozycja];

            for(;j<napis.size()+1;j++){
                if(szukany==napis[j]){
                    licznik++;
                }
                else{
                    if(licznik<3){
                        for(int k=0;k<licznik;k++)
                            cout<<szukany;
                    }
                    else{
                            cout<<szukany<<licznik;
                    }
                    pozycja=j;
                    licznik=1;
                    break;
                }
            }

        }
        pozycja=0;
        licznik=0;
        cout<<endl;
    }

    return 0;
}
