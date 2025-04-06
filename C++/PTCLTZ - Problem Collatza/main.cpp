#include <iostream>

using namespace std;

int collatz(int x){
    static int n=0;
    int z;

    if(x==1)
        return n;
    if(x%2){
        n++;
        n=collatz(3*x+1);
    }
    else{
        n++;
        n=collatz(x/2);
    }
    z=n;
    n=0;
    return z;
}

int main(){
    int testow;
    int x;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>x;
        x=collatz(x);
        cout<<x<<endl;;
    }

    return 0;
}
