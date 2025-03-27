#include <iostream>

using namespace std;

int main(){
    int n;

    cin>>n;

    if(n==0){
        cout<<"0"<<endl;
        return 0;
    }
    else if((n>0)&&(n<3)){
        cout<<"NIE"<<endl;
        return 0;
    }

    for(int i=n-1;i>=0;i-=2){
        cout<<i<<" ";
    }
    for(int i=n;i>=0;i-=2){
        cout<<i<<" ";
    }
    cout<<endl;



    return 0;
}
