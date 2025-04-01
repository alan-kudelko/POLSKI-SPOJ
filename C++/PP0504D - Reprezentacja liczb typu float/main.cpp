#include <iostream>
#include <iomanip>

using namespace std;

void printfloat(float a){
    void*x=(void*)(&a)+(sizeof(float)-1)*sizeof(char);
    int l;
    for(int i=0;i<sizeof(float);i++){
        l=(*(char*)(x--));
        cout<<hex<<(l&255)<<" ";
    }
    cout<<endl;
}

int main(){
    int testow;
    float a;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>a;
        printfloat(a);
    }

    return 0;
}
