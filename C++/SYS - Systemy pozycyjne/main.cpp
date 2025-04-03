#include <iostream>

using namespace std;

int main(){
    int testow;
    int liczba;
    const char poz11[11]={'0','1','2','3','4','5','6','7','8','9','A'};
    char l[100000]={0};
            l[99999]='\0';

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>liczba;

        cout<<hex<<uppercase<<liczba<<" ";
        int j;
        for(j=99998;j>=0;j--){
            l[j]=poz11[liczba%11];
            liczba/=11;
            if(liczba==0)
                break;
        }
        cout<<(l+j)<<endl;
    }

    return 0;
}
