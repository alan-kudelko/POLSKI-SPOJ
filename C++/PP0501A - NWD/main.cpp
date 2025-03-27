#include <iostream>

using namespace std;

int nwd(int a,int b){
    int bufor;

    while(a!=b){
        if(a<b){
            bufor=a;
            a=b;
            b=bufor;
        }
        a-=b;
    }

    return a;
}

int main(){
    int testow;
    int a,b;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>a>>b;

        cout<<nwd(a,b)<<endl;
    }
    return 0;
}
