#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int testow;
    long int a;
    long int b;
    int cyfra;
    int koncowka;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>a>>b;
        cyfra=a%10;

        switch(cyfra){
            case 0:
            cout<<"0"<<endl;
            break;
            case 1:
            cout<<"1"<<endl;
            break;

            case 2:
            case 3:
            case 4:
            case 7:
            case 8:
            case 9:
            koncowka=pow(a%10,b%4+4);
            koncowka%=10;
            cout<<koncowka<<endl;

            break;

            case 5:
            cout<<"5"<<endl;
            break;

            case 6:
            cout<<"6"<<endl;
            break;

        }
    }

    return 0;
}
