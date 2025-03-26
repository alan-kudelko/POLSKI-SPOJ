#include <iostream>

using namespace std;

int main(){
    int testow;
    int*maleLit;
    int*duzeLit;
    const int liter=26;
    char litera;

    string tekst;

    cin>>testow;
    cin.get();

    maleLit=new int[liter]{0};
    duzeLit=new int[liter]{0};

    for(int i=0;i<testow;i++){
        getline(cin,tekst);

        for(int j=0;j<tekst.length();j++){
            litera=tekst[j];

            if(litera==32)
                continue;

            if(litera>96){
                maleLit[litera-97]++;
            }
            else{
                duzeLit[litera-65]++;
            }
        }
    }
    for(int j=0;j<liter;j++)
        if(maleLit[j])
            cout<<(char)(97+j)<<" "<<maleLit[j]<<endl;

    for(int j=0;j<liter;j++)
        if(duzeLit[j])
            cout<<(char)(65+j)<<" "<<duzeLit[j]<<endl;


    delete[]maleLit;
    delete[]duzeLit;

    return 0;
}
