#include <iostream>

using namespace std;

int main(){
    int liczbaMiast;
    long long zysk_max=0;
    long long zysk_suma=0;
    int zysk_miasta=0;
    cin>>liczbaMiast;

    for(int i=0;i<liczbaMiast;i++){
        cin>>zysk_miasta;
        zysk_suma+=zysk_miasta;
        if(zysk_suma>zysk_max)
            zysk_max=zysk_suma;

        if(zysk_suma<0)
            zysk_suma=0;
    }
    cout<<zysk_max<<endl;
    return 0;
}
