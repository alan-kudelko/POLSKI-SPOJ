#include <iostream>
#include <string>

using namespace std;

char szyfrujLitere(char z,int k){
    if(k>=0)
        return (z+k)>'Z'?(z+k-'A'):(z+k);
    else
        return (z+k)>='A'?(z+k):('Z'-z+k);
}

int main(){
    string polecenie,tekst,klucz;

    while(cin>>polecenie>>klucz>>tekst){
        if(klucz.length()<tekst.length()){
            klucz.append(klucz,0,tekst.length()-klucz.length());
        }
        if(polecenie=="SZYFRUJ"){
            for(int i=0;i<tekst.length();i++){
                tekst[i]=szyfrujLitere(tekst[i],(klucz[i]-'0'));
            }
            cout<<tekst<<endl;
        }
        else{
            for(int i=0;i<tekst.length();i++){
                tekst[i]=szyfrujLitere(tekst[i],-(klucz[i]-'0'));
            }
            cout<<tekst<<endl;
        }
    }
    return 0;
}
