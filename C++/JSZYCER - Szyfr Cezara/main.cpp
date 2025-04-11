#include <iostream>

using namespace std;

char szyfrujLitere(char litera){
    if(litera>=88){
        return litera+3-26;
    }
    return litera+3;
}

int main(){
    string wyjscie;
    char wejscie;

    while((wejscie=cin.get())&&cin.good()){
        if(isalpha(wejscie)){
            wyjscie.append(1,szyfrujLitere(wejscie));
        }
        else{
            wyjscie.append(1,wejscie);
        }
    }
    cout<<wyjscie<<endl;

    return 0;
}
