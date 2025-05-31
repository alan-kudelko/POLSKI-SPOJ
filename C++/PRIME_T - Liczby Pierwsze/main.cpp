#include <iostream>

using namespace std;

void sito(int n,bool *tab){
    for (int i=2;i*i<=n;++i){
        if(tab[i])
            continue;
        for(int j=2*i;j<=n;j+=i)
            tab[j]=true;
    }
}
int main(){
    bool tablica[100000]={0};
    int a;
    int n;
    cin>>n;

    tablica[0]=true;
    tablica[1]=true;

    sito(100000,tablica);

    for(int i=0;i<n;i++){
        cin>>a;
        if(!tablica[a])
            cout<<"TAK";
        else
        cout<<"NIE";

        cout<<endl;
    }
    return 0;
}
