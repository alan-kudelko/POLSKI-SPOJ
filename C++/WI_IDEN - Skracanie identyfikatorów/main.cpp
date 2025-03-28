#include <iostream>
#include <algorithm>

using namespace std;

bool isvowel(char znak){
    znak=tolower(znak);
    return (znak=='a'||znak=='e'||znak=='i'||znak=='o'||znak=='u'||znak=='y');
}
int main(){
    string nazwa;
    int dlMax;
    int i;
    cin>>dlMax>>nazwa;

    for(i=nazwa.length()-1;i>=0;i--){
        if(nazwa.length()<=dlMax)
            break;
        if(!isalnum(nazwa[i]))
            nazwa.erase(i,1);
    }
    for(i=nazwa.length()-1;i>=0;i--){
        if(nazwa.length()<=dlMax)
            break;
        if(isdigit(nazwa[i]))
            nazwa.erase(i,1);
    }
    i=0;
    do{
        i++;
    }while(!isvowel(nazwa[i]));
    for(;i<nazwa.length();i++){
        if(nazwa.length()<=dlMax)
            break;
        if(isvowel(nazwa[i])){
            nazwa.erase(i,1);
            i--;
        }
    }
    for(i=nazwa.length()-1;i>=0;i--){
        if(nazwa.length()<=dlMax)
            break;
            i--;
        nazwa.erase(i,1);
    }

    cout<<nazwa<<endl;

    return 0;
}
