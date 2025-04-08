#include <iostream>

using namespace std;

int main(){
    int testow;
    long suma;
    string liczba;

    while(true){
        cin>>liczba;
        if((liczba.length()==1)&&(stoi(liczba)==0))
            break;
        suma=0;
        int j=0;
        for(;j<liczba.length();j++){
            suma+=(liczba[j]-48);
        }
        if(!(suma%3)&&(liczba[j-1]-48==5||liczba[j-1]-48==0))
            cout<<"TAK"<<endl;
        else
            cout<<"NIE"<<endl;
    }
    return 0;
}
