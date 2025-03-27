#include <iostream>

using namespace std;

int main(){
    int testow;
    string napis;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>napis;
        for(int j=0;j<napis.length()/2;j++){
            cout<<napis[j];
        }
        cout<<endl;
    }

    return 0;
}
