#include <iostream>

using namespace std;

int main(){
    int x;
    int y;
    int n;
    int an;
    int testow;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>n>>x>>y;

        for(int j=x;j<n;j+=x){
            if(!(j%y))
                continue;
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
