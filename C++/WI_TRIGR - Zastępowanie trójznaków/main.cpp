#include <iostream>

using namespace std;

int main(){
    string linia;
    string substring;

    while(getline(cin,linia)){
        for(int i=0;i<linia.length();i++){
            substring=linia.substr(i,3);
            if(substring=="??="){ //#
                linia[i]='#';
                linia.erase(i+1,2);
            }
            if(substring=="??/"){ //
                linia[i]='\\';
                linia.erase(i+1,2);
            }
            if(substring=="??'"){ //^
                linia[i]='^';
                linia.erase(i+1,2);
            }
            if(substring=="??("){ // [
                linia[i]='[';
                linia.erase(i+1,2);
            }
            if(substring=="??)"){ // ]
                linia[i]=']';
                linia.erase(i+1,2);
            }
            if(substring=="??!"){ //|
                linia[i]='|';
                linia.erase(i+1,2);
            }
            if(substring=="??<"){ // {
                linia[i]='{';
                linia.erase(i+1,2);
            }
            if(substring=="??>"){ // }
                linia[i]='}';
                linia.erase(i+1,2);
            }
            if(substring=="??-"){ // ~
                linia[i]='~';
                linia.erase(i+1,2);
            }
        }
        cout<<linia<<endl;
    }

    return 0;
}
