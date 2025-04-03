#include <iostream>

using namespace std;

int main(){
    int m;
    int n;
    int**macierz;

    cin>>m>>n;

    macierz=new int*[n];

    for(int i=0;i<n;i++)
        macierz[i]=new int[m];


    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>macierz[j][i];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<macierz[i][j]<<" ";
        }
        cout<<endl;
    }




    for(int i=0;i<n;i++)
        delete[] macierz[i];

    delete[] macierz;

    return 0;
}
