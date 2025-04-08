#include <iostream>

using namespace std;

int main(){
    char literaKas;
    string wejscie;
    int i=0;

    while(cin>>literaKas>>wejscie){
        i=0;
        while(i<wejscie.length()){
            if(wejscie[i]==literaKas){
                wejscie.erase(i,1);
            }
            else
                i++;
        }
        cout<<wejscie<<endl;
    }
    return 0;
}
