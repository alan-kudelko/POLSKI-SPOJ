#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string stronaLewa;
    string stronaPrawa;
    string skladnik;

    long wspolczynniki[2]={0}; // x0 x1
    bool fZnak=false; //false znak + true znak -
    long pozOd;
    long pozDo;
    int testow;

    cin>>testow;
    cin.ignore(10,'\n');

    for(int i=0;i<testow;i++){
        getline(cin,stronaLewa,'=');
        getline(cin,stronaPrawa);
        wspolczynniki[0]=wspolczynniki[1]=0;
        pozOd=pozDo=0;
        while(pozOd!=string::npos){
            pozDo=stronaLewa.find('\n',pozOd+1);
            if(stronaLewa.find('-',pozOd+1)!=string::npos)
                pozDo=stronaLewa.find('-',pozOd+1);
            if(stronaLewa.find('+',pozOd+1)!=string::npos)
                pozDo=stronaLewa.find('+',pozOd+1)<pozDo?stronaLewa.find('+',pozOd+1):pozDo;

            skladnik=stronaLewa.substr(pozOd,pozDo-pozOd);
            fZnak=false;
            if(skladnik.find('-')!=string::npos){
                skladnik.erase(skladnik.find('-'),1);
                fZnak=true;
            }
            else if(skladnik.find('+')!=string::npos){
                skladnik.erase(skladnik.find('+'),1);
                fZnak=false;
            }
            if(skladnik.find('x')!=string::npos){
                skladnik.erase(skladnik.find('x'),1);
                if(skladnik==""){
                    wspolczynniki[1]+=fZnak?-1:1;
                }
                else{
                    wspolczynniki[1]+=fZnak?-stoi(skladnik):stoi(skladnik);
                }
            }
            else{
                wspolczynniki[0]+=fZnak?-stoi(skladnik):stoi(skladnik);
            }
            pozOd=pozDo;

        }
        pozOd=pozDo=0;
        while((pozOd!=string::npos)){
            pozDo=stronaPrawa.find('\n',pozOd+1);
            if(stronaPrawa.find('-',pozOd+1)!=string::npos)
                pozDo=stronaPrawa.find('-',pozOd+1);
            if(stronaPrawa.find('+',pozOd+1)!=string::npos)
                pozDo=stronaPrawa.find('+',pozOd+1)<pozDo?stronaPrawa.find('+',pozOd+1):pozDo;

            skladnik=stronaPrawa.substr(pozOd,pozDo-pozOd);
            fZnak=true;
            if(skladnik.find('-')!=string::npos){
                skladnik.erase(skladnik.find('-'),1);
                fZnak=false;
            }
            else if(skladnik.find('+')!=string::npos){
                skladnik.erase(skladnik.find('+'),1);
                fZnak=true;
            }
            if(skladnik.find('x')!=string::npos){
                skladnik.erase(skladnik.find('x'),1);
                if(skladnik==""){
                    wspolczynniki[1]+=fZnak?-1:1;
                }
                else{
                    wspolczynniki[1]+=fZnak?-stoi(skladnik):stoi(skladnik);
                }
            }
            else{
                wspolczynniki[0]+=fZnak?-stoi(skladnik):stoi(skladnik);
            }
            pozOd=pozDo;

        }

        if(wspolczynniki[1]!=0){
            cout<<-wspolczynniki[0]/wspolczynniki[1]<<endl;
        }
        else
            cout<<"NIE"<<endl;
    }

    return 0;
}
