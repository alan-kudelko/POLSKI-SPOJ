#include <iostream>

using namespace std;

int main(){
    int testow;
    int l;
    int k;
    int x;
    int y;
    int**macierz;
    int*w;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>l>>k;

        macierz=new int*[l];

        for(int j=0;j<l;j++)
            macierz[j]=new int[k];

        for(int j=0;j<l;j++){
            for(int h=0;h<k;h++){
                cin>>macierz[j][h];
            }
        }

        x=y=0;

        int bufor=macierz[0][0];

        for(int j=0;j<k-1;j++){
            macierz[y][x]=macierz[y][x+1];
            x++;
        }
        for(int j=0;j<l-1;j++){
            macierz[y][x]=macierz[y+1][x];
            y++;
        }
        for(int j=0;j<k-1;j++){
            macierz[y][x]=macierz[y][x-1];
            x--;
        }
        for(int j=0;j<l-2;j++){
            macierz[y][x]=macierz[y-1][x];
            y--;
        }
        macierz[y][x]=bufor;


        for(int j=0;j<l;j++){
            for(int h=0;h<k;h++){
                cout<<macierz[j][h]<<" ";
            }
            cout<<endl;
        }

        for(int j=0;j<l;j++)
            delete[] macierz[j];

        delete[]macierz;
    }

    return 0;
}
