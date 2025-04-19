#include <iostream>

using namespace std;

const int wartosciLiter[]{1,2,3,4,5,6,7,8,9,0,10,20,30,40,50,60,70,80,90,100,0,200,0,300,400,500};

int obliczDate(string w){
    int suma=0;
    for(int i=0;i<w.length();i++){
        suma+=wartosciLiter[w[i]-97];
    }
    return suma;
}

int main(){
    string wejscie;
    cin>>wejscie;
    cout<<obliczDate(wejscie)<<endl;
    return 0;
}
