#include <iostream>

using namespace std;

int main(){
    int szukana;
    int ilosc;
    int wejscie;
    int wystapien;

    while(cin>>szukana>>ilosc){
        wystapien=0;
        for(int i=0;i<ilosc;i++){
            cin>>wejscie;
            if(wejscie==szukana)
                wystapien++;
        }
        cout<<wystapien<<endl;


    }

    return 0;
}
