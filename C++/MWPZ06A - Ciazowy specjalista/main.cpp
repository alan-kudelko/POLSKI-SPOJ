#include <iostream>

using namespace std;

int main(){
    int testow;
    int x,y,z;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>x>>y>>z;

        cout<<(unsigned int)(12*(y-x/(z-1.0))+0.5)<<endl;
    }
    return 0;
}
