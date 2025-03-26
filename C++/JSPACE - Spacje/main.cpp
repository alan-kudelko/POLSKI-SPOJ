#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string tekst;
    string tekstWyjsciowy;
    bool f_powiekszenie=false;
    while(getline(cin,tekst)){

    for(int i=0;i<tekst.length();i++){
        if(tekst[i]==32){
            f_powiekszenie=true;
            continue;
        }
        if(f_powiekszenie){
            tekstWyjsciowy+=toupper(tekst[i]);
            f_powiekszenie=false;
            continue;
        }
        tekstWyjsciowy+=tekst[i];
    }
    cout<<tekstWyjsciowy<<endl;
    tekstWyjsciowy="";
    }
    return 0;
}
