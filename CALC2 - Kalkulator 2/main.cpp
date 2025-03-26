#include <iostream>

using namespace std;

int main(){
    int r[10]={0};
    char operacja;
    int rejestr;
    int x;
    int y;

    while(cin>>operacja){
        if('z'==operacja){
            cin>>rejestr;
            cin>>r[rejestr];
            continue;
        }
        if('+'==operacja){
            cin>>x>>y;
            cout<<r[x]+r[y]<<endl;
            continue;
        }
        if('-'==operacja){
            cin>>x>>y;
            cout<<r[x]-r[y]<<endl;
            continue;
        }
        if('*'==operacja){
            cin>>x>>y;
            cout<<r[x]*r[y]<<endl;
            continue;
        }
        if('/'==operacja){
            cin>>x>>y;
            cout<<r[x]/r[y]<<endl;
            continue;
        }
        if('%'==operacja){
            cin>>x>>y;
            cout<<r[x]%r[y]<<endl;
            continue;
        }
    }


    return 0;
}
