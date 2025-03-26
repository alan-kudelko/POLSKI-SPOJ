#include <iostream>

using namespace std;

int main(){
    int testow;
    int suma;
    int mnoznik[4]={1,3,7,9};
    string pesel;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>pesel;
        suma=0;
        int j=0;
        for(;j<pesel.length()-3;j++){
            suma+=(pesel[j]-48)*mnoznik[j%4];
        }
        suma+=pesel[j++]-48;
        suma+=(pesel[j++]-48)*3;
        suma+=pesel[j]-48;

        if(!(suma%10))
            cout<<"D"<<endl;
        else
            cout<<"N"<<endl;
    }

    return 0;
}
