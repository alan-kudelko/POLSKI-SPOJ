#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string linia;
    string imie;
    string nazwisko;
    string sprawdzenie_daty;
    int rok;
    int miesiac;
    int dzien;
    int poz_od=0;
    int poz_do=0;
    int i=0;
    int nr_bledu=3;

    while(getline(cin,linia)){
        poz_od=0;
        poz_do=0;
        poz_od=linia.find(' ',poz_od)+1;
        poz_do=linia.find(';',poz_od);

        imie=linia.substr(poz_od,poz_do-poz_od);

        poz_od=poz_do+2;
        poz_od=linia.find(' ',poz_od)+1;
        poz_do=linia.find(';',poz_od);
        nazwisko=linia.substr(poz_od,poz_do-poz_od);

        poz_od=poz_do+2;
        poz_od=linia.find(':',poz_od)+2;
        poz_do=linia.find('-',poz_od);
        sprawdzenie_daty=linia.substr(poz_od,poz_do-poz_od);
        for(i=0;i<sprawdzenie_daty.length();i++){
            if(!isdigit(sprawdzenie_daty[i])){
                nr_bledu=4;
                break;
            }
        }
        if(nr_bledu!=4)
            rok=stoi(linia.substr(poz_od,poz_do-poz_od));

        poz_od=poz_do+1;
        poz_do=linia.find('-',poz_od);
        sprawdzenie_daty=linia.substr(poz_od,poz_do-poz_od);
        for(i=0;i<sprawdzenie_daty.length();i++){
            if(!isdigit(sprawdzenie_daty[i])){
                nr_bledu=4;
                break;
            }
        }
        if(nr_bledu!=4)
            miesiac=stoi(linia.substr(poz_od,poz_do-poz_od));

        poz_od=poz_do+1;
        poz_do=linia.find('-',poz_od);
        sprawdzenie_daty=linia.substr(poz_od,poz_do-poz_od);
        for(i=0;i<sprawdzenie_daty.length();i++){
            if(!isdigit(sprawdzenie_daty[i])){
                nr_bledu=4;
                break;
            }
        }
        if(nr_bledu!=4)
            dzien=stoi(linia.substr(poz_od,poz_do-poz_od));

        nr_bledu=3;
        i=0;

        if(islower(imie[i])){
            nr_bledu=0;
            i=imie.length();
        }
        i++;
        for(;i<imie.length();i++){
            if(!isalpha(imie[i])||isupper(imie[i])){
                nr_bledu=0;
                break;
            }
        }
        if(nr_bledu==0){
            cout<<nr_bledu<<endl;
            continue;
        }
        i=0;
        if(islower(nazwisko[i])){
            nr_bledu=1;
            i=nazwisko.length();
        }
        i++;
        for(;i<nazwisko.length();i++){
            if(!isalpha(nazwisko[i])||isupper(nazwisko[i])){
                nr_bledu=1;
                break;
            }
        }
        if(nr_bledu==1){
            cout<<nr_bledu<<endl;
            continue;
        }
        if(!((rok>=1900)&&(rok<=2000))){
            nr_bledu=2;
        }
        if(!((miesiac>=1)&&(miesiac<=12))){
            nr_bledu=2;
        }
        if(!((dzien>=1)&&(dzien<=31))){
            nr_bledu=2;
        }
        if(nr_bledu==2){
            cout<<nr_bledu<<endl;
            continue;
        }
        else
            cout<<nr_bledu<<endl;

    }

    return 0;
}
