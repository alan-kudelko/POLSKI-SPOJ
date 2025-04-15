#include <iostream>

using namespace std;

int main(){
    int a,b;
    int bufor;
    int testow;
    int l1,l2;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>l1>>l2;

        a=l1;
        b=l2;

        while(a!=b){
            if(a<b){
            bufor=a;
            a=b;
            b=bufor;
            }
            a-=b;
        }
        cout<<l1*l2/a<<endl;
    }

    return 0;
}
