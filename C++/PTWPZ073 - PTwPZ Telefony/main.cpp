#include <iostream>

using namespace std;

int main(){
        char litery[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int cyfra[26]={
            2,2,2,
            3,3,3,
            4,4,4,
            5,5,5,
            6,6,6,
            7,7,7,7,
            8,8,8,
            9,9,9,9
        };
        int lZestawow;
        string tekst;

        cin>>lZestawow;

        for(int k=0;k<lZestawow;k++){
            cin>>tekst;
            for(int i=0;i<tekst.length();i++){
                cout<<cyfra[tekst[i]-65];
            }
            cout<<endl;
        }

    return 0;
}
