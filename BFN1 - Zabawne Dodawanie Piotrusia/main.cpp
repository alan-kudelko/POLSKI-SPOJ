#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int testow;
    int suma=0;
    int j=0;
    string a;
    string reversedA;


    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>a;
        if(!stoi(a)%11){
            cout<<a<<" "<<0<<endl;
            continue;
        }
        reversedA=a;
        reverse(reversedA.begin(),reversedA.end());

        for(j=0;a!=reversedA;j++){
            suma+=atoi(a.c_str());
            suma+=atoi(reversedA.c_str());

            a=to_string(suma);
            reversedA=a;
            reverse(reversedA.begin(),reversedA.end());
            suma=0;
        }

        cout<<a<<" "<<j<<endl;
    }

    return 0;
}
