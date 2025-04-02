#include <iostream>

using namespace std;

int main(){
    int obecna;
    int poprzednia1=42;
    int licznik=0;
    do{
        cin>>obecna;
        if((poprzednia1!=42)&(obecna==42)){
            licznik++;
        }

        cout<<obecna<<endl;
        poprzednia1=obecna;
    }while(licznik<3);

    return 0;
}
