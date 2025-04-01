#include <iostream>

using namespace std;

int main(){
    int testow;
    long long a,b;

    cin>>testow;
    for(int i=0;i<testow;i++){
        cin>>a>>b;

        while(a!=b){
            if(a<=b)
                b-=a;
            else
                a-=b;
        }
        cout<<a+b<<endl;
    }

    return 0;
}
