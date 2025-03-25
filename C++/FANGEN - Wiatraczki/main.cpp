#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int r=1;
    int podmian=0;
    char**tab;
    bool kropka=0;
    bool skret=0; //0 to jest lewoskretny 1 to prawoskretny

    int kierunek=0; //0 dol 1 prawo 2 gora 3 lewo
    int kierunki[2][4]={{1,2,3,4},{2,1,4,3}};


    while(r!=0){
        cin>>r;
        skret=0;

        if(!r)
            break;
        if(r<0){
            r=-r;
            skret=1;
        }

        tab=new char*[2*r]{0};
        for(int j=0;j<2*r;j++){
            tab[j]=new char[2*r]{0};
        }

        tab[r][r]=tab[r-1][r]=tab[r-1][r-1]=tab[r][r-1]='*'; //Uzupelniony srodek


        for(int j=1;j<r;j++){
            tab[r+j][r+j]=tab[r-j-1][r-j-1]=tab[r+j][r-j-1]=tab[r-j-1][r+j]='*'; //rogi kazdej podmacierzy

            int x=(r>0)?(r-j-1):(r-j-1);
            int y=(r>0)?(r-j-1):(r-j-1);
            //cout<<y<<" "<<x<<endl;
            for(int k=0;k<4+8*j;k++){
                    if(((k)%(2*j+1)==0)&&(k>0)){
                        kierunek++;
                    }
                    if(kierunek==4)
                        kierunek=0;
                    if(kierunki[skret][kierunek]==1){
                        y++;
                    }
                    else if(kierunki[skret][kierunek]==2){
                        x++;
                    }
                    else if(kierunki[skret][kierunek]==3){
                        y--;
                    }
                    else if(kierunki[skret][kierunek]==4){
                        x--;
                    }
                    //cout<<y<<" "<<x<<" k "<<k<<" kierunek "<<kierunek<<endl;

                if(tab[y][x]!='*'){
                    if(!kropka)
                        tab[y][x]='*';
                    else
                        tab[y][x]='.';
                    podmian++;

                }
                if(podmian==j){
                    kropka=!kropka;
                    podmian=0;
                }

            }


            podmian=0;
            kropka=0;
            kierunek=0;
        }

        for(int j=0;j<2*r;j++){
            for(int k=0;k<2*r;k++){
                cout<<tab[j][k];
            }
            cout<<endl;
        }
        cout<<endl;

        for(int j=0;j<2*r;j++)
            delete[]tab[j];
        kropka=0;
        podmian=0;
    }

    return 0;
}
